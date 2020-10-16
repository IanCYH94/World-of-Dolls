// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Doll_MyBuild/Doll_MyBuildGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoll_MyBuildGameMode() {}
// Cross Module References
	DOLL_MYBUILD_API UClass* Z_Construct_UClass_ADoll_MyBuildGameMode_NoRegister();
	DOLL_MYBUILD_API UClass* Z_Construct_UClass_ADoll_MyBuildGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Doll_MyBuild();
// End Cross Module References
	void ADoll_MyBuildGameMode::StaticRegisterNativesADoll_MyBuildGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADoll_MyBuildGameMode_NoRegister()
	{
		return ADoll_MyBuildGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADoll_MyBuildGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoll_MyBuildGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Doll_MyBuild,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoll_MyBuildGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Doll_MyBuildGameMode.h" },
		{ "ModuleRelativePath", "Doll_MyBuildGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoll_MyBuildGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoll_MyBuildGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoll_MyBuildGameMode_Statics::ClassParams = {
		&ADoll_MyBuildGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADoll_MyBuildGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoll_MyBuildGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoll_MyBuildGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoll_MyBuildGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoll_MyBuildGameMode, 233570901);
	template<> DOLL_MYBUILD_API UClass* StaticClass<ADoll_MyBuildGameMode>()
	{
		return ADoll_MyBuildGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoll_MyBuildGameMode(Z_Construct_UClass_ADoll_MyBuildGameMode, &ADoll_MyBuildGameMode::StaticClass, TEXT("/Script/Doll_MyBuild"), TEXT("ADoll_MyBuildGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoll_MyBuildGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
