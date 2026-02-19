// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LlamaRAGComponent.h"

#ifdef LLAMARAG_LlamaRAGComponent_generated_h
#error "LlamaRAGComponent.generated.h already included, missing '#pragma once' in LlamaRAGComponent.h"
#endif
#define LLAMARAG_LlamaRAGComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnRagAnswerGenerated *************************************************
#define FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h_13_DELEGATE \
LLAMARAG_API void FOnRagAnswerGenerated_DelegateWrapper(const FMulticastScriptDelegate& OnRagAnswerGenerated, const FString& Answer);


// ********** End Delegate FOnRagAnswerGenerated ***************************************************

// ********** Begin Delegate FOnRagStoryIngested ***************************************************
#define FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h_14_DELEGATE \
LLAMARAG_API void FOnRagStoryIngested_DelegateWrapper(const FMulticastScriptDelegate& OnRagStoryIngested, bool bSuccess);


// ********** End Delegate FOnRagStoryIngested *****************************************************

// ********** Begin Delegate FOnModelsLoaded *******************************************************
#define FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h_15_DELEGATE \
LLAMARAG_API void FOnModelsLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnModelsLoaded, bool bSuccess);


// ********** End Delegate FOnModelsLoaded *********************************************************

// ********** Begin ScriptStruct FStoryChunk *******************************************************
struct Z_Construct_UScriptStruct_FStoryChunk_Statics;
#define FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStoryChunk_Statics; \
	LLAMARAG_API static class UScriptStruct* StaticStruct();


struct FStoryChunk;
// ********** End ScriptStruct FStoryChunk *********************************************************

// ********** Begin Class ULlamaRAGComponent *******************************************************
#define FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAskQuestionAsync); \
	DECLARE_FUNCTION(execIngestStoryAsync); \
	DECLARE_FUNCTION(execLoadModelsAsync);


struct Z_Construct_UClass_ULlamaRAGComponent_Statics;
LLAMARAG_API UClass* Z_Construct_UClass_ULlamaRAGComponent_NoRegister();

#define FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULlamaRAGComponent(); \
	friend struct ::Z_Construct_UClass_ULlamaRAGComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LLAMARAG_API UClass* ::Z_Construct_UClass_ULlamaRAGComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULlamaRAGComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LlamaRAG"), Z_Construct_UClass_ULlamaRAGComponent_NoRegister) \
	DECLARE_SERIALIZER(ULlamaRAGComponent)


#define FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULlamaRAGComponent(ULlamaRAGComponent&&) = delete; \
	ULlamaRAGComponent(const ULlamaRAGComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULlamaRAGComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULlamaRAGComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULlamaRAGComponent) \
	NO_API virtual ~ULlamaRAGComponent();


#define FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h_27_PROLOG
#define FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULlamaRAGComponent;

// ********** End Class ULlamaRAGComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
