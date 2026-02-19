#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <vector>
#include <string>
#include "LlamaRAGComponent.generated.h"

// Forward declare llama structs to avoid including llama.h in the Unreal header
struct llama_model;
struct llama_context;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRagAnswerGenerated, const FString&, Answer);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRagStoryIngested, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnModelsLoaded, bool, bSuccess);

// Struct to hold our Vector Database in memory
USTRUCT()
struct FStoryChunk
{
    GENERATED_BODY()

    FString TextContent;
    TArray<float> EmbeddingVector;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LLAMARAG_API ULlamaRAGComponent : public UActorComponent
{
    GENERATED_BODY()

public:	
    ULlamaRAGComponent();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
    // Blueprint Delegates
    UPROPERTY(BlueprintAssignable, Category = "Local RAG")
    FOnModelsLoaded OnModelsLoaded;

    UPROPERTY(BlueprintAssignable, Category = "Local RAG")
    FOnRagStoryIngested OnStoryIngested;

    UPROPERTY(BlueprintAssignable, Category = "Local RAG")
    FOnRagAnswerGenerated OnAnswerGenerated;

    // --- Core Functions ---

    /** Load both the Embedding model and the LLM natively via llama.cpp */
    UFUNCTION(BlueprintCallable, Category = "Local RAG")
    void LoadModelsAsync(const FString& LLMModelPath, const FString& EmbedModelPath);

    /** Chunks the story, generates embeddings, and stores them in memory */
    UFUNCTION(BlueprintCallable, Category = "Local RAG")
    void IngestStoryAsync(const FString& StoryText, int32 ChunkSize = 500);

    /** Embeds the question, finds the top K chunks, and generates an answer */
    UFUNCTION(BlueprintCallable, Category = "Local RAG")
    void AskQuestionAsync(const FString& Question, int32 TopK = 3);

private:
    // Native llama.cpp pointers
    llama_model* LlmModel;
    llama_context* LlmContext;
    
    llama_model* EmbedModel;
    llama_context* EmbedContext;

    // In-memory Vector Database
    TArray<FStoryChunk> VectorDB;

    // Helper functions running on background threads
    TArray<float> GenerateEmbedding(const FString& Text);
    FString GenerateTextInternal(const FString& Prompt);
    
    // Math helper for Vector Search
    float CalculateCosineSimilarity(const TArray<float>& A, const TArray<float>& B);
    
    // Thread safety flag
    bool bIsBusy;
};