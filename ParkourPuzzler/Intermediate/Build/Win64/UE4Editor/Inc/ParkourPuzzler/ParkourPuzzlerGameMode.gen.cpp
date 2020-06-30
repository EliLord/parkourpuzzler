// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ParkourPuzzlerGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
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
	UClass* Z_Construct_UClass_AParkourPuzzlerGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_ParkourPuzzler();
			OuterClass = AParkourPuzzlerGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AParkourPuzzlerGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ParkourPuzzlerGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ParkourPuzzlerGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParkourPuzzlerGameMode, 1540880122);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParkourPuzzlerGameMode(Z_Construct_UClass_AParkourPuzzlerGameMode, &AParkourPuzzlerGameMode::StaticClass, TEXT("/Script/ParkourPuzzler"), TEXT("AParkourPuzzlerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParkourPuzzlerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
