#pragma once

#ifndef SCENE_H
#define SCENE_H

#include "Entity.h"
#include "json.hpp"

#include <list>

class Scene {
	std::list<Entity*> entities;
public:
	Scene();
	~Scene();
	void Initialize();
	void Destroy();
	void Update();
	void AddEntity(Entity* _entity);
	void RemoveEntity(Entity* _entity);
	void Load(json::JSON& node);
};

#endif