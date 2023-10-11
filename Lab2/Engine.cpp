#include "Engine.h"

#include "utils.h"

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

	// We need someone to 'own' our root JSON object
	auto _settings = utils::give_me_json(SETTINGS_FILE);

	if (_settings.hasKey("RenderSystem")) {
		renderSystem->Load(_settings["RenderSystem"]);
		
		renderSystem->Initialize();
	} else {
		utils::error_msg("Settings File is missing RenderSystem field!");
	}
	if (_settings.hasKey("Engine")) {
		if (_settings["Engine"].hasKey("DefaultFile")) {
			auto _level = utils::give_me_json(_settings["Engine"]["DefaultFile"].ToString().c_str());
			Load(_level);
		} else {
			utils::error_msg("DefaultFile field not set!");
		}
	} else {
		utils::error_msg("Settings File is missing Engine field!");
	}

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

void Engine::Load(json::JSON& node) {
	std::cout << "Engine Loading" << std::endl;

	if (node.hasKey("SceneManager")) {
		sceneManager->Load(node["SceneManager"]);
	}
	if (node.hasKey("InputManager")) {
		inputManager->Load(node["InputManager"]);
	}
	if (node.hasKey("AssetManager")) {
		assetManager->Load(node["AssetManager"]);
	}
}