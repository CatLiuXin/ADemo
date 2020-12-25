// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AttributeSetData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct ADEMO_API FAttributeSetData:public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DataTable")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DataTable")
	float HP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DataTable")
	float AttackPower;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DataTable")
	float DefensePower;
	
	FAttributeSetData();
	~FAttributeSetData();
};
