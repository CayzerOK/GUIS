// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"
// WARNING: THIS IS WIP
// If you know how to replace this with switch or universal SetPropertyValue() func - let me know how.
// I spend too much time to find out and just use easy but stupid way.
bool UItemBase::LoadData(TMap<FString, FItemInnerProperty> PropMap)
{
    FString ThisPropName;
    for (TFieldIterator<FProperty> PropIt(GetClass()); PropIt; ++PropIt)
    {
        ThisPropName = PropIt->GetAuthoredName();
        if (PropMap.Contains(ThisPropName))
        {
            FItemInnerProperty NewValue = *PropMap.Find(ThisPropName);
            void* Dest = PropIt->ContainerPtrToValuePtr<void>(this);
            SetProp(*PropIt, Dest, NewValue);
        }
    }
    return true;
}

void UItemBase::SetProp(FProperty* Property, void* ValuePtr, FItemInnerProperty NewValue)
{
    if (FNumericProperty* NumericProperty = CastField<FNumericProperty>(Property))
    {
        FString NewNum = CastField<FNumericProperty>(NewValue.Property)
            ->GetNumericPropertyValueToString(NewValue.ValuePtr);
        NumericProperty->SetNumericPropertyValueFromString(ValuePtr, ToCStr(NewNum));
    }
    else if (FEnumProperty* EnumProperty = CastField<FEnumProperty>(Property))
    {
        UEnum* NewEnumValue = CastField<FEnumProperty>(NewValue.Property)->GetEnum();
        EnumProperty->SetEnum(NewEnumValue);
    }
    else if (FBoolProperty* BoolProperty = CastField<FBoolProperty>(Property))
    {
        const bool NewState = CastField<FBoolProperty>(NewValue.Property)->GetPropertyValue(NewValue.ValuePtr);
        BoolProperty->SetPropertyValue(ValuePtr, NewState);
    }
    else if (FStrProperty* StringProperty = CastField<FStrProperty>(Property))
    {
        FString NewString = CastField<FStrProperty>(NewValue.Property)->GetPropertyValue(NewValue.ValuePtr);
        StringProperty->SetPropertyValue(ValuePtr, NewString);
    }
    else if (FByteProperty* ByteProperty = CastField<FByteProperty>(Property))
    {
        ByteProperty->SetPropertyValue(ValuePtr,
                                       CastField<FByteProperty>(NewValue.Property)->GetPropertyValue(
                                           NewValue.ValuePtr));
    }
    else if (FClassProperty* ClassProperty = CastField<FClassProperty>(Property))
    {
        ClassProperty->SetPropertyValue(ValuePtr,
                                        CastField<FClassProperty>(NewValue.Property)->GetPropertyValue(
                                            NewValue.ValuePtr));
    }
    else if (FDelegateProperty* DelegateProperty = CastField<FDelegateProperty>(Property))
    {
        DelegateProperty->SetPropertyValue(ValuePtr,
                                           CastField<FDelegateProperty>(NewValue.Property)->GetPropertyValue(
                                               NewValue.Property));
    }
    else if (FInterfaceProperty* InterfaceProperty = CastField<FInterfaceProperty>(Property))
    {
        InterfaceProperty->SetPropertyValue(ValuePtr,
                                            CastField<FInterfaceProperty>(NewValue.Property)->GetPropertyValue(
                                                NewValue.Property));
    }
    else if (FNameProperty* NameProperty = CastField<FNameProperty>(Property))
    {
        NameProperty->SetPropertyValue(ValuePtr,
                                       CastField<FNameProperty>(NewValue.Property)->GetPropertyValue(
                                           NewValue.Property));
    }
    else if (FObjectProperty* ObjectProperty = CastField<FObjectProperty>(Property))
    {
        ObjectProperty->SetPropertyValue(ValuePtr,
                                         CastField<FObjectProperty>(NewValue.Property)->GetPropertyValue(
                                             NewValue.Property));
    }
    else if (FTextProperty* TextProperty = CastField<FTextProperty>(Property))
    {
    }
    else if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property))
    {
        ArrayProperty->SetPropertyValue(ValuePtr,
                                        CastField<FArrayProperty>(NewValue.Property)->GetPropertyValue(
                                            NewValue.Property));
    }
    else if (FMapProperty* MapProperty = CastField<FMapProperty>(Property))
    {
        MapProperty->SetPropertyValue(ValuePtr,
                                      CastField<FMapProperty>(NewValue.Property)->GetPropertyValue(NewValue.Property));
    }
    else if (FSetProperty* SetProperty = CastField<FSetProperty>(Property))
    {
        SetProperty->SetPropertyValue(ValuePtr,
                                      CastField<FSetProperty>(NewValue.Property)->GetPropertyValue(NewValue.Property));
    }
    else if (FStructProperty* StructProperty = CastField<FStructProperty>(Property))
    {
        FStructProperty* NewStructProperty = CastField<FStructProperty>(NewValue.Property);

        TFieldIterator<FProperty> ThisProperty(StructProperty->Struct);
        TFieldIterator<FProperty> NewProperty(NewStructProperty->Struct);

        for (ThisProperty; ThisProperty; ++ThisProperty, ++NewProperty)
        {
            for (int32 ArrayIndex = 0; ArrayIndex < ThisProperty->ArrayDim; ArrayIndex++)
            {
                void* ThisValuePtr = ThisProperty->ContainerPtrToValuePtr<void>(ValuePtr, ArrayIndex);
                void* NewValuePtr = NewProperty->ContainerPtrToValuePtr<void>(NewValue.ValuePtr, ArrayIndex);

                SetProp(*ThisProperty, ThisValuePtr, FItemInnerProperty{*NewProperty, NewValuePtr});
            }
        }
    }
    else if (Property)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            15.0f,
            FColor::Yellow,
            FString::Printf(
                TEXT("Unknown field %s of %s"),
                *Property->GetAuthoredName(),
                *Property->GetClass()->GetName()));
    }
}
