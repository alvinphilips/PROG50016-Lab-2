#pragma once

#ifndef ENGINE_H
#define ENGINE_H

#include "RenderSystem.h"
#include "InputManager.h"
#include "AssetManager.h"
#include "SceneManager.h"
#include "json.hpp"

#define SETTINGS_FILE "GameSettings.json"

class Engine {
	RenderSystem* renderSystem = nullptr;
	InputManager* inputManager = nullptr;
	AssetManager* assetManager = nullptr;
	SceneManager* sceneManager = nullptr;

public:
	Engine();
	~Engine();
	void Initialize();
	void Destroy();
	void GameLoop();
	void Load(json::JSON node);
};

#endif