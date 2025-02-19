// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chpt5/MyTriggerVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTriggerVolume() {}
// Cross Module References
	CHPT5_API UClass* Z_Construct_UClass_AMyTriggerVolume_NoRegister();
	CHPT5_API UClass* Z_Construct_UClass_AMyTriggerVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Chpt5();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyTriggerVolume::execNotifyActorEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyActorEndOverlap(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyTriggerVolume::execNotifyActorBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyActorBeginOverlap(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AMyTriggerVolume::StaticRegisterNativesAMyTriggerVolume()
	{
		UClass* Class = AMyTriggerVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyActorBeginOverlap", &AMyTriggerVolume::execNotifyActorBeginOverlap },
			{ "NotifyActorEndOverlap", &AMyTriggerVolume::execNotifyActorEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyTriggerVolume_NotifyActorBeginOverlap_Statics
	{
		struct MyTriggerVolume_eventNotifyActorBeginOverlap_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTriggerVolume_NotifyActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyTriggerVolume_eventNotifyActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyTriggerVolume_NotifyActorBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTriggerVolume_NotifyActorBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTriggerVolume_NotifyActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTriggerVolume_NotifyActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTriggerVolume, nullptr, "NotifyActorBeginOverlap", nullptr, nullptr, sizeof(MyTriggerVolume_eventNotifyActorBeginOverlap_Parms), Z_Construct_UFunction_AMyTriggerVolume_NotifyActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTriggerVolume_NotifyActorBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyTriggerVolume_NotifyActorBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTriggerVolume_NotifyActorBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyTriggerVolume_NotifyActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyTriggerVolume_NotifyActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyTriggerVolume_NotifyActorEndOverlap_Statics
	{
		struct MyTriggerVolume_eventNotifyActorEndOverlap_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTriggerVolume_NotifyActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyTriggerVolume_eventNotifyActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyTriggerVolume_NotifyActorEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTriggerVolume_NotifyActorEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTriggerVolume_NotifyActorEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTriggerVolume_NotifyActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTriggerVolume, nullptr, "NotifyActorEndOverlap", nullptr, nullptr, sizeof(MyTriggerVolume_eventNotifyActorEndOverlap_Parms), Z_Construct_UFunction_AMyTriggerVolume_NotifyActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTriggerVolume_NotifyActorEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyTriggerVolume_NotifyActorEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTriggerVolume_NotifyActorEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyTriggerVolume_NotifyActorEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyTriggerVolume_NotifyActorEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyTriggerVolume_NoRegister()
	{
		return AMyTriggerVolume::StaticClass();
	}
	struct Z_Construct_UClass_AMyTriggerVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTriggerVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Chpt5,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyTriggerVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyTriggerVolume_NotifyActorBeginOverlap, "NotifyActorBeginOverlap" }, // 2326266052
		{ &Z_Construct_UFunction_AMyTriggerVolume_NotifyActorEndOverlap, "NotifyActorEndOverlap" }, // 3050963900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTriggerVolume_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyTriggerVolume.h" },
		{ "ModuleRelativePath", "MyTriggerVolume.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_TriggerZone_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_TriggerZone = { "TriggerZone", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyTriggerVolume, TriggerZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_TriggerZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_TriggerZone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTriggerVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTriggerVolume_Statics::NewProp_TriggerZone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTriggerVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTriggerVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTriggerVolume_Statics::ClassParams = {
		&AMyTriggerVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyTriggerVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyTriggerVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTriggerVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTriggerVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTriggerVolume, 1769745487);
	template<> CHPT5_API UClass* StaticClass<AMyTriggerVolume>()
	{
		return AMyTriggerVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTriggerVolume(Z_Construct_UClass_AMyTriggerVolume, &AMyTriggerVolume::StaticClass, TEXT("/Script/Chpt5"), TEXT("AMyTriggerVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTriggerVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
