// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLlamaRAG_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	LLAMARAG_API UFunction* Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature();
	LLAMARAG_API UFunction* Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature();
	LLAMARAG_API UFunction* Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LlamaRAG;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LlamaRAG()
	{
		if (!Z_Registration_Info_UPackage__Script_LlamaRAG.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/LlamaRAG",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xF5C4C9FF,
			0x23750D47,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LlamaRAG.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_LlamaRAG.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LlamaRAG(Z_Construct_UPackage__Script_LlamaRAG, TEXT("/Script/LlamaRAG"), Z_Registration_Info_UPackage__Script_LlamaRAG, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF5C4C9FF, 0x23750D47));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
