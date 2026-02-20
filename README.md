LlamaRAG Unreal Engine Plugin

LlamaRAG is a native, offline Retrieval-Augmented Generation (RAG) plugin for Unreal Engine 5. Powered by llama.cpp, it allows you to run Large Language Models (LLMs) and Vector Embeddings natively in C++ and Blueprints.

With this plugin, your NPCs or in-game systems can read actual .txt files containing your game's lore, rules, or character backstories, and answer player questions dynamically—without an internet connection, without Python servers, and with zero API costs.

🛠️ 1. Installation & Integration

To integrate this plugin into your existing Unreal Engine C++ Project, follow these steps:

Step 1: Copy the Plugin Folder

Navigate to your Unreal project's root directory (where your .uproject file is).

Create a folder named Plugins (if it doesn't already exist).

Drop the LlamaRAG plugin folder into the Plugins directory.

Step 2: Ensure Third-Party Binaries are Present

The plugin relies on compiled llama.cpp binaries. Ensure your folder structure looks like this:

YourProject/Plugins/LlamaRAG/ThirdParty/LlamaCpp/
  ├── include/ (Contains llama.h, ggml.h, etc.)
  ├── lib/     (Contains llama.lib)
  └── bin/     (Contains llama.dll, ggml.dll, ggml-base.dll, etc.)


Note: The bin folder MUST contain all required DLLs. The plugin's LlamaRAG.cpp module explicitly loads these into memory to prevent initialization crashes.

Step 3: Regenerate and Build

Right-click your YourProject.uproject file.

Select "Generate Visual Studio project files".

Open the .sln file in Visual Studio.

Set your build configuration to Development Editor (Win64) and click Build.

Launch your project. Open Edit -> Plugins and ensure "Llama Local RAG" is enabled.

🧠 2. Setting Up Your AI Models & Data

The plugin requires two AI models (in .gguf format) and your text data.

Open your project's Content folder.

Create a folder named Models.

Create a folder named Data.

Download an LLM: Go to HuggingFace and download a quantized LLM (e.g., Meta-Llama-3-8B-Instruct.Q4_K_M.gguf or Phi-3-mini-4k-instruct.gguf). Place it in Content/Models/.

Download an Embedding Model: Go to HuggingFace and download an embedding model (e.g., nomic-embed-text-v1.5.f16.gguf). Place it in Content/Models/.

Create your Lore File: Create a text file named story.txt inside Content/Data/. Write your game lore, NPC backstory, or rules inside this file.

📘 3. Blueprint Node Reference

All functionality is exposed through the Llama RAG Component. Add this component to any Actor, GameMode, or PlayerController.

Helper Nodes

Get Content Directory Path (Pure Node)

Description: Automatically finds the absolute path to your project's Content folder (works in both the Editor and Packaged games). Use this to construct safe file paths.

Action Nodes (Asynchronous)

Load Models Async

Description: Initializes llama.cpp and loads the LLM and Embedding models into memory on a background thread.

Inputs: LLMModelPath (String), EmbedModelPath (String).

Ingest Story From File Async

Description: Reads a .txt file, splits it into chunks, calculates the vector embeddings, and stores them in RAM.

Inputs: FilePath (String), ChunkSize (Integer, Default: 500).

Ask Question Async

Description: Takes the player's question, searches the ingested text for the most relevant context, and generates a contextual answer.

Inputs: Question (String), TopK (Integer, Default: 3). TopK determines how many chunks of text are retrieved as context.

Event Dispatchers (Callbacks)

Because AI generation is heavy, you must bind to these events to know when the background threads finish their tasks.

On Models Loaded: Fires when models finish loading. Outputs bSuccess (Boolean).

On Story Ingested: Fires when the text file is fully embedded. Outputs bSuccess (Boolean).

On Answer Generated: Fires when the LLM finishes generating the text. Outputs the Answer (String).

🎮 4. Detailed Blueprint Usage Guide

Here is exactly how to wire up the system in a Blueprint (e.g., BP_NPC_Controller):

Step 1: Add the Component

Open your Blueprint, click Add Component, and select Llama RAG Component.

Step 2: Load the Models (On BeginPlay)

From Event BeginPlay, drag in your Llama RAG Component and call Load Models Async.

Build the Paths: Drag off the component and call Get Content Directory Path.

Use an Append string node:

A: Output of Get Content Directory Path

B: Models/your_llm_name.gguf

Plug the result into LLMModelPath.

Do the same for EmbedModelPath (e.g., Models/nomic-embed.gguf).

Select the component, go to the details panel, and click the green + to add the On Models Loaded event.

Step 3: Ingest the Lore File

From the On Models Loaded event, add a Branch checking if bSuccess is True.

If True, call Ingest Story From File Async.

Build the Path: Get Content Directory Path -> Append -> Data/story.txt.

Add the On Story Ingested event to your graph. When it fires, you can enable the player's chat box UI (the AI is now ready!).

Step 4: Ask Questions & Receive Answers

When the player submits a question via your UI, call Ask Question Async and pass the text in.

Add the On Answer Generated event to your graph.

When this event fires, take the Answer string and print it to the screen, pass it to your Dialogue UI, or send it to a Text-To-Speech system!

