// Fill out your copyright notice in the Description page of Project Settings.


#include "GameItem.h"

bool UGameItem::LoadData(TMap<FString, FItemInnerProperty> PropMap)
{
    for (TFieldIterator<FProperty> PropIt(GetClass()); PropIt; ++PropIt)
    {
        FString ThisPropName = PropIt->GetAuthoredName();
        if (PropMap.Contains(ThisPropName))
        {
            const FItemInnerProperty NewValue = *PropMap.Find(ThisPropName);
            void* Dest = PropIt->ContainerPtrToValuePtr<void>(this);
            SetProp(*PropIt, Dest, NewValue);
        }
    }
    
    return true;
}

void UGameItem::SetProp(FProperty* Property, void* ValuePtr, FItemInnerProperty NewValue) const
{
    if (FNumericProperty* NumericProperty = CastField<FNumericProperty>(Property))
    {
        const FString NewNum = CastField<FNumericProperty>(NewValue.Property)
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
        const FString NewString = CastField<FStrProperty>(NewValue.Property)->GetPropertyValue(NewValue.ValuePtr);
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
    else if (FObjectPropertyBase* ObjectBase = CastField<FObjectPropertyBase>(Property))
    {
        if(FObjectProperty* ObjectProperty = CastField<FObjectProperty>(ObjectBase))
        {
            ObjectProperty->SetPropertyValue(ValuePtr, CastField<FObjectProperty>(NewValue.Property)->GetObjectPropertyValue(NewValue.ValuePtr));
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(
            -1,
            15.0f,
            FColor::Yellow,
            FString::Printf(
                TEXT("Field %s has unexpected Object type %s"),
                *ObjectBase->GetAuthoredName(),
                *ObjectBase->GetClass()->GetName()));
        }
    }
    else if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property))
    {
        ArrayProperty->SetPropertyValue(ValuePtr,
                                        CastField<FArrayProperty>(NewValue.Property)->GetPropertyValue(
                                            NewValue.Property));
    }
    else if (FMapProperty* MapProperty = CastField<FMapProperty>(Property))
    {
        FMapProperty* NewMapProperty = CastField<FMapProperty>(NewValue.Property);
        
        FScriptMapHelper MapHelper(MapProperty, ValuePtr);
        FScriptMapHelper NewMapHelper(NewMapProperty, NewValue.ValuePtr);

        MapHelper.EmptyValues();
        
        for (auto n = 0; n < NewMapHelper.GetMaxIndex(); n++) {
            if (NewMapHelper.IsValidIndex(n)) {
                const auto NewKeyPtr = NewMapHelper.GetKeyPtr(n);
                const auto NewValuePtr = NewMapHelper.GetValuePtr(n);
                MapHelper.AddPair(NewKeyPtr, NewValuePtr);
            }
        }
    }
    else if (FSetProperty* SetProperty = CastField<FSetProperty>(Property))
    {
        SetProperty->SetPropertyValue(
            ValuePtr,
            CastField<FSetProperty>(NewValue.Property)->GetPropertyValue(NewValue.Property)
        );
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
                TEXT("Field %s has unexpected type %s"),
                *Property->GetAuthoredName(),
                *Property->GetClass()->GetName()));
    }
}