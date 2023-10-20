// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class MOBILERPG_API SlateMenuWidget
{
public:
	SLATE_BEGIN_ARGS(SlateMenuWidget){}

	SLATE_ARGUMENT(TWeakObjectPtr<class MainHUD>, OwningHUD)

	SLATE_END_ARGS()
	
	void Construct(const FArguments& InArgs);

	TWeakObjectPtr<class MainHUD> OwningHUD;

};
