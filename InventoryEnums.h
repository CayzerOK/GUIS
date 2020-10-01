#pragma once

UENUM(BlueprintType)
enum EInvType
{
    Inventory     UMETA(DisplayName = "Inventory"),
    Equipment     UMETA(DisplayName = "Equipment"),
    InProcess     UMETA(DisplayName = "ProcessInput"),
    OutProcess     UMETA(DisplayName = "ProcessOutput"),
    AddProcess     UMETA(DisplayName = "ProcessAddition"),
    Handle     UMETA(DisplayName = "Handle")
};

UENUM(BlueprintType)
enum ESortType
{
    Name     UMETA(DisplayName = "Name"),
    Weight     UMETA(DisplayName = "Weight"),
    Volume     UMETA(DisplayName = "Volume"),
    Count     UMETA(DisplayName = "Count"),
    Damage     UMETA(DisplayName = "Damage"),
    Armor     UMETA(DisplayName = "Armor"),
    Tier     UMETA(DisplayName = "Tier"),
    Cost     UMETA(DisplayName = "Cost")
};