// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LlamaRAGComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLlamaRAGComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LLAMARAG_API UClass* Z_Construct_UClass_ULlamaRAGComponent();
LLAMARAG_API UClass* Z_Construct_UClass_ULlamaRAGComponent_NoRegister();
LLAMARAG_API UFunction* Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature();
LLAMARAG_API UFunction* Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature();
LLAMARAG_API UFunction* Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature();
LLAMARAG_API UScriptStruct* Z_Construct_UScriptStruct_FStoryChunk();
UPackage* Z_Construct_UPackage__Script_LlamaRAG();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRagAnswerGenerated *************************************************
struct Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature_Statics
{
	struct _Script_LlamaRAG_eventOnRagAnswerGenerated_Parms
	{
		FString Answer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LlamaRAGComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Answer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRagAnswerGenerated constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Answer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRagAnswerGenerated constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRagAnswerGenerated Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature_Statics::NewProp_Answer = { "Answer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LlamaRAG_eventOnRagAnswerGenerated_Parms, Answer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Answer_MetaData), NewProp_Answer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature_Statics::NewProp_Answer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRagAnswerGenerated Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LlamaRAG, nullptr, "OnRagAnswerGenerated__DelegateSignature", 	Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature_Statics::_Script_LlamaRAG_eventOnRagAnswerGenerated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature_Statics::_Script_LlamaRAG_eventOnRagAnswerGenerated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRagAnswerGenerated_DelegateWrapper(const FMulticastScriptDelegate& OnRagAnswerGenerated, const FString& Answer)
{
	struct _Script_LlamaRAG_eventOnRagAnswerGenerated_Parms
	{
		FString Answer;
	};
	_Script_LlamaRAG_eventOnRagAnswerGenerated_Parms Parms;
	Parms.Answer=Answer;
	OnRagAnswerGenerated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRagAnswerGenerated ***************************************************

// ********** Begin Delegate FOnRagStoryIngested ***************************************************
struct Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics
{
	struct _Script_LlamaRAG_eventOnRagStoryIngested_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LlamaRAGComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRagStoryIngested constinit property declarations *******************
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRagStoryIngested constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRagStoryIngested Property Definitions ******************************
void Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_LlamaRAG_eventOnRagStoryIngested_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_LlamaRAG_eventOnRagStoryIngested_Parms), &Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRagStoryIngested Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LlamaRAG, nullptr, "OnRagStoryIngested__DelegateSignature", 	Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::_Script_LlamaRAG_eventOnRagStoryIngested_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::_Script_LlamaRAG_eventOnRagStoryIngested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRagStoryIngested_DelegateWrapper(const FMulticastScriptDelegate& OnRagStoryIngested, bool bSuccess)
{
	struct _Script_LlamaRAG_eventOnRagStoryIngested_Parms
	{
		bool bSuccess;
	};
	_Script_LlamaRAG_eventOnRagStoryIngested_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnRagStoryIngested.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRagStoryIngested *****************************************************

// ********** Begin Delegate FOnModelsLoaded *******************************************************
struct Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics
{
	struct _Script_LlamaRAG_eventOnModelsLoaded_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LlamaRAGComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnModelsLoaded constinit property declarations ***********************
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnModelsLoaded constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnModelsLoaded Property Definitions **********************************
void Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_LlamaRAG_eventOnModelsLoaded_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_LlamaRAG_eventOnModelsLoaded_Parms), &Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnModelsLoaded Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LlamaRAG, nullptr, "OnModelsLoaded__DelegateSignature", 	Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::_Script_LlamaRAG_eventOnModelsLoaded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::_Script_LlamaRAG_eventOnModelsLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnModelsLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnModelsLoaded, bool bSuccess)
{
	struct _Script_LlamaRAG_eventOnModelsLoaded_Parms
	{
		bool bSuccess;
	};
	_Script_LlamaRAG_eventOnModelsLoaded_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnModelsLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnModelsLoaded *********************************************************

// ********** Begin ScriptStruct FStoryChunk *******************************************************
struct Z_Construct_UScriptStruct_FStoryChunk_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStoryChunk); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStoryChunk); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Struct to hold our Vector Database in memory\n" },
#endif
		{ "ModuleRelativePath", "Public/LlamaRAGComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct to hold our Vector Database in memory" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStoryChunk constinit property declarations ***********************
// ********** End ScriptStruct FStoryChunk constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoryChunk>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStoryChunk_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStoryChunk;
class UScriptStruct* FStoryChunk::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStoryChunk.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStoryChunk.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoryChunk, (UObject*)Z_Construct_UPackage__Script_LlamaRAG(), TEXT("StoryChunk"));
	}
	return Z_Registration_Info_UScriptStruct_FStoryChunk.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoryChunk_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LlamaRAG,
	nullptr,
	&NewStructOps,
	"StoryChunk",
	nullptr,
	0,
	sizeof(FStoryChunk),
	alignof(FStoryChunk),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryChunk_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStoryChunk_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStoryChunk()
{
	if (!Z_Registration_Info_UScriptStruct_FStoryChunk.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStoryChunk.InnerSingleton, Z_Construct_UScriptStruct_FStoryChunk_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStoryChunk.InnerSingleton);
}
// ********** End ScriptStruct FStoryChunk *********************************************************

// ********** Begin Class ULlamaRAGComponent Function AskQuestionAsync *****************************
struct Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics
{
	struct LlamaRAGComponent_eventAskQuestionAsync_Parms
	{
		FString Question;
		int32 TopK;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Local RAG" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Embeds the question, finds the top K chunks, and generates an answer */" },
#endif
		{ "CPP_Default_TopK", "3" },
		{ "ModuleRelativePath", "Public/LlamaRAGComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Embeds the question, finds the top K chunks, and generates an answer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Question_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AskQuestionAsync constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Question;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TopK;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AskQuestionAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AskQuestionAsync Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::NewProp_Question = { "Question", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LlamaRAGComponent_eventAskQuestionAsync_Parms, Question), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Question_MetaData), NewProp_Question_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::NewProp_TopK = { "TopK", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LlamaRAGComponent_eventAskQuestionAsync_Parms, TopK), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::NewProp_Question,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::NewProp_TopK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::PropPointers) < 2048);
// ********** End Function AskQuestionAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULlamaRAGComponent, nullptr, "AskQuestionAsync", 	Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::LlamaRAGComponent_eventAskQuestionAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::LlamaRAGComponent_eventAskQuestionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULlamaRAGComponent::execAskQuestionAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Question);
	P_GET_PROPERTY(FIntProperty,Z_Param_TopK);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AskQuestionAsync(Z_Param_Question,Z_Param_TopK);
	P_NATIVE_END;
}
// ********** End Class ULlamaRAGComponent Function AskQuestionAsync *******************************

// ********** Begin Class ULlamaRAGComponent Function IngestStoryAsync *****************************
struct Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics
{
	struct LlamaRAGComponent_eventIngestStoryAsync_Parms
	{
		FString StoryText;
		int32 ChunkSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Local RAG" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Chunks the story, generates embeddings, and stores them in memory */" },
#endif
		{ "CPP_Default_ChunkSize", "500" },
		{ "ModuleRelativePath", "Public/LlamaRAGComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chunks the story, generates embeddings, and stores them in memory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoryText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IngestStoryAsync constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_StoryText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IngestStoryAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IngestStoryAsync Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::NewProp_StoryText = { "StoryText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LlamaRAGComponent_eventIngestStoryAsync_Parms, StoryText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoryText_MetaData), NewProp_StoryText_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LlamaRAGComponent_eventIngestStoryAsync_Parms, ChunkSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::NewProp_StoryText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::NewProp_ChunkSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::PropPointers) < 2048);
// ********** End Function IngestStoryAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULlamaRAGComponent, nullptr, "IngestStoryAsync", 	Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::LlamaRAGComponent_eventIngestStoryAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::LlamaRAGComponent_eventIngestStoryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULlamaRAGComponent::execIngestStoryAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StoryText);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChunkSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IngestStoryAsync(Z_Param_StoryText,Z_Param_ChunkSize);
	P_NATIVE_END;
}
// ********** End Class ULlamaRAGComponent Function IngestStoryAsync *******************************

// ********** Begin Class ULlamaRAGComponent Function LoadModelsAsync ******************************
struct Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics
{
	struct LlamaRAGComponent_eventLoadModelsAsync_Parms
	{
		FString LLMModelPath;
		FString EmbedModelPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Local RAG" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Load both the Embedding model and the LLM natively via llama.cpp */" },
#endif
		{ "ModuleRelativePath", "Public/LlamaRAGComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load both the Embedding model and the LLM natively via llama.cpp" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LLMModelPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmbedModelPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadModelsAsync constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_LLMModelPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EmbedModelPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadModelsAsync constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadModelsAsync Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::NewProp_LLMModelPath = { "LLMModelPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LlamaRAGComponent_eventLoadModelsAsync_Parms, LLMModelPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LLMModelPath_MetaData), NewProp_LLMModelPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::NewProp_EmbedModelPath = { "EmbedModelPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LlamaRAGComponent_eventLoadModelsAsync_Parms, EmbedModelPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmbedModelPath_MetaData), NewProp_EmbedModelPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::NewProp_LLMModelPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::NewProp_EmbedModelPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::PropPointers) < 2048);
// ********** End Function LoadModelsAsync Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULlamaRAGComponent, nullptr, "LoadModelsAsync", 	Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::LlamaRAGComponent_eventLoadModelsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::LlamaRAGComponent_eventLoadModelsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULlamaRAGComponent::execLoadModelsAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LLMModelPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_EmbedModelPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadModelsAsync(Z_Param_LLMModelPath,Z_Param_EmbedModelPath);
	P_NATIVE_END;
}
// ********** End Class ULlamaRAGComponent Function LoadModelsAsync ********************************

// ********** Begin Class ULlamaRAGComponent *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULlamaRAGComponent;
UClass* ULlamaRAGComponent::GetPrivateStaticClass()
{
	using TClass = ULlamaRAGComponent;
	if (!Z_Registration_Info_UClass_ULlamaRAGComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LlamaRAGComponent"),
			Z_Registration_Info_UClass_ULlamaRAGComponent.InnerSingleton,
			StaticRegisterNativesULlamaRAGComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ULlamaRAGComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_ULlamaRAGComponent_NoRegister()
{
	return ULlamaRAGComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULlamaRAGComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LlamaRAGComponent.h" },
		{ "ModuleRelativePath", "Public/LlamaRAGComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnModelsLoaded_MetaData[] = {
		{ "Category", "Local RAG" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/LlamaRAGComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStoryIngested_MetaData[] = {
		{ "Category", "Local RAG" },
		{ "ModuleRelativePath", "Public/LlamaRAGComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnswerGenerated_MetaData[] = {
		{ "Category", "Local RAG" },
		{ "ModuleRelativePath", "Public/LlamaRAGComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULlamaRAGComponent constinit property declarations ***********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnModelsLoaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStoryIngested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnswerGenerated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULlamaRAGComponent constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AskQuestionAsync"), .Pointer = &ULlamaRAGComponent::execAskQuestionAsync },
		{ .NameUTF8 = UTF8TEXT("IngestStoryAsync"), .Pointer = &ULlamaRAGComponent::execIngestStoryAsync },
		{ .NameUTF8 = UTF8TEXT("LoadModelsAsync"), .Pointer = &ULlamaRAGComponent::execLoadModelsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULlamaRAGComponent_AskQuestionAsync, "AskQuestionAsync" }, // 1784388749
		{ &Z_Construct_UFunction_ULlamaRAGComponent_IngestStoryAsync, "IngestStoryAsync" }, // 176125183
		{ &Z_Construct_UFunction_ULlamaRAGComponent_LoadModelsAsync, "LoadModelsAsync" }, // 751940110
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULlamaRAGComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULlamaRAGComponent_Statics

// ********** Begin Class ULlamaRAGComponent Property Definitions **********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULlamaRAGComponent_Statics::NewProp_OnModelsLoaded = { "OnModelsLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULlamaRAGComponent, OnModelsLoaded), Z_Construct_UDelegateFunction_LlamaRAG_OnModelsLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnModelsLoaded_MetaData), NewProp_OnModelsLoaded_MetaData) }; // 2001305140
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULlamaRAGComponent_Statics::NewProp_OnStoryIngested = { "OnStoryIngested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULlamaRAGComponent, OnStoryIngested), Z_Construct_UDelegateFunction_LlamaRAG_OnRagStoryIngested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStoryIngested_MetaData), NewProp_OnStoryIngested_MetaData) }; // 2791794845
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULlamaRAGComponent_Statics::NewProp_OnAnswerGenerated = { "OnAnswerGenerated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULlamaRAGComponent, OnAnswerGenerated), Z_Construct_UDelegateFunction_LlamaRAG_OnRagAnswerGenerated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnswerGenerated_MetaData), NewProp_OnAnswerGenerated_MetaData) }; // 2028058736
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULlamaRAGComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULlamaRAGComponent_Statics::NewProp_OnModelsLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULlamaRAGComponent_Statics::NewProp_OnStoryIngested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULlamaRAGComponent_Statics::NewProp_OnAnswerGenerated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULlamaRAGComponent_Statics::PropPointers) < 2048);
// ********** End Class ULlamaRAGComponent Property Definitions ************************************
UObject* (*const Z_Construct_UClass_ULlamaRAGComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LlamaRAG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULlamaRAGComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULlamaRAGComponent_Statics::ClassParams = {
	&ULlamaRAGComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULlamaRAGComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULlamaRAGComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULlamaRAGComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULlamaRAGComponent_Statics::Class_MetaDataParams)
};
void ULlamaRAGComponent::StaticRegisterNativesULlamaRAGComponent()
{
	UClass* Class = ULlamaRAGComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULlamaRAGComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULlamaRAGComponent()
{
	if (!Z_Registration_Info_UClass_ULlamaRAGComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULlamaRAGComponent.OuterSingleton, Z_Construct_UClass_ULlamaRAGComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULlamaRAGComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULlamaRAGComponent);
ULlamaRAGComponent::~ULlamaRAGComponent() {}
// ********** End Class ULlamaRAGComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h__Script_LlamaRAG_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStoryChunk::StaticStruct, Z_Construct_UScriptStruct_FStoryChunk_Statics::NewStructOps, TEXT("StoryChunk"),&Z_Registration_Info_UScriptStruct_FStoryChunk, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStoryChunk), 1535217074U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULlamaRAGComponent, ULlamaRAGComponent::StaticClass, TEXT("ULlamaRAGComponent"), &Z_Registration_Info_UClass_ULlamaRAGComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULlamaRAGComponent), 2980885245U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h__Script_LlamaRAG_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h__Script_LlamaRAG_537330802{
	TEXT("/Script/LlamaRAG"),
	Z_CompiledInDeferFile_FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h__Script_LlamaRAG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h__Script_LlamaRAG_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h__Script_LlamaRAG_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sriha_OneDrive_Documents_Unreal_Projects_MyProject_Plugins_LlamaRAG_Source_LlamaRAG_Public_LlamaRAGComponent_h__Script_LlamaRAG_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
