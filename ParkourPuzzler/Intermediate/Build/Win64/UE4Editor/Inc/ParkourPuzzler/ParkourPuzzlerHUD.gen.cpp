// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParkourPuzzler/ParkourPuzzlerHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParkourPuzzlerHUD() {}
// Cross Module References
	PARKOURPUZZLER_API UClass* Z_Construct_UClass_AParkourPuzzlerHUD_NoRegister();
	PARKOURPUZZLER_API UClass* Z_Construct_UClass_AParkourPuzzlerHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ParkourPuzzler();
// End Cross Module References
	void AParkourPuzzlerHUD::StaticRegisterNativesAParkourPuzzlerHUD()
	{
	}
	UClass* Z_Construct_UClass_AParkourPuzzlerHUD_NoRegister()
	{
		return AParkourPuzzlerHUD::StaticClass();
	}
	struct Z_Construct_UClass_AParkourPuzzlerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParkourPuzzlerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ParkourPuzzler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParkourPuzzlerHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ParkourPuzzlerHUD.h" },
		{ "ModuleRelativePath", "ParkourPuzzlerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParkourPuzzlerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParkourPuzzlerHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParkourPuzzlerHUD_Statics::ClassParams = {
		&AParkourPuzzlerHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AParkourPuzzlerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParkourPuzzlerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParkourPuzzlerHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParkourPuzzlerHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParkourPuzzlerHUD, 47204040);
	template<> PARKOURPUZZLER_API UClass* StaticClass<AParkourPuzzlerHUD>()
	{
		return AParkourPuzzlerHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParkourPuzzlerHUD(Z_Construct_UClass_AParkourPuzzlerHUD, &AParkourPuzzlerHUD::StaticClass, TEXT("/Script/ParkourPuzzler"), TEXT("AParkourPuzzlerHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParkourPuzzlerHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
