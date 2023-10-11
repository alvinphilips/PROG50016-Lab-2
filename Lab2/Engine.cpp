#include "Engine.h"


Engine::Engine() {
	std::cout << "Engine Created" << std::endl;
}

Engine::~Engine() {
	std::cout << "Engine Destructed" << std::endl;
}

void Engine::Initialize() {
	renderSystem = new RenderSystem();
	inputManager = new InputManager();
	sceneManager = new SceneManager();
	assetManager = new AssetManager();

	renderSystem->Initialize();
	inputManager->Initialize();
	sceneManager->Initialize();
	assetManager->Initialize();

	std::cout << "Engine Initialized" << std::endl;
}

void Engine::Destroy() {
	assetManager->Destroy();
	sceneManager->Destroy();
	inputManager->Destroy();
	renderSystem->Destroy();
	
	delete assetManager;
	delete sceneManager;
	delete inputManager;
	delete renderSystem;

	assetManager = nullptr;
	sceneManager = nullptr;
	inputManager = nullptr;
	renderSystem = nullptr;
	std::cout << "Engine Destroyed" << std::endl;
}

void Engine::GameLoop() {
	// Run loop for five iterations
	for (int i = 0; i < 5; i++) {
		sceneManager->Update();
		assetManager->Update();
		inputManager->Update();
		renderSystem->Update();
	}
}

void Engine::Load(json::JSON node) {

}