// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "ItemBase.h"
#include "UObject/NoExportTypes.h"
#include "Inventory.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class GUIS_API UInventory : public UObject
{
	GENERATED_BODY()

	static void ParseProperty(FProperty* Property, void* ValuePtr)
	{
		float FloatValue;
		int32 IntValue;
		bool BoolValue;
		FString StringValue;
		FName NameValue;
		FText TextValue;

		// Here's how to read integer and float properties
		if (FNumericProperty* NumericProperty = CastField<FNumericProperty>(Property))
		{
			if (NumericProperty->IsFloatingPoint())
			{
				FloatValue = NumericProperty->GetFloatingPointPropertyValue(ValuePtr);
				UE_LOG(LogTemp, Warning, TEXT("integer[%d]"), FloatValue);
			}
			else if (NumericProperty->IsInteger())
			{
				IntValue = NumericProperty->GetSignedIntPropertyValue(ValuePtr);
				UE_LOG(LogTemp, Warning, TEXT("integer:'%i'"), IntValue);
			}
		}
		// How to read booleans
		else if (FBoolProperty* BoolProperty = CastField<FBoolProperty>(Property))
		{
			BoolValue = BoolProperty->GetPropertyValue(ValuePtr);
			if (BoolValue) 
			{
				UE_LOG(LogTemp, Warning, TEXT("Bool: True"));
			}
			else 
			{
				UE_LOG(LogTemp, Warning, TEXT("Bool: False"));
			}
		}

		// Reading names
		else if (FNameProperty* NameProperty = CastField<FNameProperty>(Property))
		{
			NameValue = NameProperty->GetPropertyValue(ValuePtr);
			UE_LOG(LogTemp, Warning, TEXT("Name:'%s'"), *NameValue.ToString());

		}

		// Reading strings
		else if (FStrProperty* StringProperty = CastField<FStrProperty>(Property))
		{
			StringValue = StringProperty->GetPropertyValue(ValuePtr);
			UE_LOG(LogTemp, Warning, TEXT("String:'%s'"), *StringValue);
		}

		// Reading texts
		else if (FTextProperty* TextProperty = CastField<FTextProperty>(Property))
		{
			TextValue = TextProperty->GetPropertyValue(ValuePtr);
			UE_LOG(LogTemp, Warning, TEXT("Text:'%s'"), *TextValue.ToString());
		}

		// Reading an array
		else if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property))
		{
			// We need the helper to get to the items of the array       
			FScriptArrayHelper Helper(ArrayProperty, ValuePtr);
			for (int32 i = 0, n = Helper.Num(); i < n; ++i)
			{
				UE_LOG(LogTemp, Warning, TEXT("Array:%i"), i);
				ParseProperty(ArrayProperty->Inner, Helper.GetRawPtr(i));
			}
		}

		// Reading a nested struct
		else if (Property)
		{
			ParseProperty(Property, ValuePtr);
		}
	}
};