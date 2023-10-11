#pragma once

#ifndef ENTITY_H
#define ENTITY_H

#include "Component.h"

#include <list>

class Entity {
	std::list<Component*> components;
	std::string name;
public:
	Entity();
	~Entity();
	void Initialize();
	void Destroy();
	void AddComponent(Component* _component);
	void RemoveComponent(Component* _component);
	void Update();
	std::string& GetName();
	void Load(json::JSON& node);
};

#endif