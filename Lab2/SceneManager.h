#pragma once

#ifndef SCENE_MANAGER_H
#define SCENE_MANAGER_H

#include "Scene.h"
#include "json.hpp"

#include <list>

class SceneManager {
	std::list<Scene*> scenes;
public:
	SceneManager();
	~SceneManager();
	void Initialize();
	void Destroy();
	void Update();
	void AddScene(Scene* _scene);
	void RemoveScene(Scene* _scene);
	void Load(json::JSON node);
};


#endif