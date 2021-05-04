// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterAnimData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class ADEMO_API UCharacterAnimData : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Anim)
	class UBlendSpace1D* RunIdle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Anim)
	class UAnimMontage* DamageAnim;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Anim)
	class UAnimSequence* DeadAnim;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Anim)
	TArray<class UAnimMontage*> AttackMontages;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Anim)
	class USkeletalMesh* Mesh;
};
