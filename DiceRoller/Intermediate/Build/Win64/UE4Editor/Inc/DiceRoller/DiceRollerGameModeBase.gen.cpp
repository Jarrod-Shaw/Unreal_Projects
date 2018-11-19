// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiceRoller/DiceRollerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiceRollerGameModeBase() {}
// Cross Module References
	DICEROLLER_API UClass* Z_Construct_UClass_ADiceRollerGameModeBase_NoRegister();
	DICEROLLER_API UClass* Z_Construct_UClass_ADiceRollerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DiceRoller();
// End Cross Module References
	void ADiceRollerGameModeBase::StaticRegisterNativesADiceRollerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADiceRollerGameModeBase_NoRegister()
	{
		return ADiceRollerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADiceRollerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADiceRollerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiceRoller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiceRollerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DiceRollerGameModeBase.h" },
		{ "ModuleRelativePath", "DiceRollerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADiceRollerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADiceRollerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADiceRollerGameModeBase_Statics::ClassParams = {
		&ADiceRollerGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADiceRollerGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADiceRollerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADiceRollerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADiceRollerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADiceRollerGameModeBase, 743107563);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADiceRollerGameModeBase(Z_Construct_UClass_ADiceRollerGameModeBase, &ADiceRollerGameModeBase::StaticClass, TEXT("/Script/DiceRoller"), TEXT("ADiceRollerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADiceRollerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
