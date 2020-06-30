// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParkourPuzzler/ParkourPuzzlerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParkourPuzzlerGameMode() {}
// Cross Module References
	PARKOURPUZZLER_API UClass* Z_Construct_UClass_AParkourPuzzlerGameMode_NoRegister();
	PARKOURPUZZLER_API UClass* Z_Construct_UClass_AParkourPuzzlerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ParkourPuzzler();
// End Cross Module References
	void AParkourPuzzlerGameMode::StaticRegisterNativesAParkourPuzzlerGameMode()
	{
	}
	UClass* Z_Construct_UClass_AParkourPuzzlerGameMode_NoRegister()
	{
		return AParkourPuzzlerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AParkourPuzzlerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParkourPuzzlerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ParkourPuzzler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParkourPuzzlerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ParkourPuzzlerGameMode.h" },
		{ "ModuleRelativePath", "ParkourPuzzlerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParkourPuzzlerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParkourPuzzlerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParkourPuzzlerGameMode_Statics::ClassParams = {
		&AParkourPuzzlerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AParkourPuzzlerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParkourPuzzlerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParkourPuzzlerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParkourPuzzlerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParkourPuzzlerGameMode, 3273799439);
	template<> PARKOURPUZZLER_API UClass* StaticClass<AParkourPuzzlerGameMode>()
	{
		return AParkourPuzzlerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParkourPuzzlerGameMode(Z_Construct_UClass_AParkourPuzzlerGameMode, &AParkourPuzzlerGameMode::StaticClass, TEXT("/Script/ParkourPuzzler"), TEXT("AParkourPuzzlerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParkourPuzzlerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
