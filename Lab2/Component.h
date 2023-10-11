#pragma once

#ifndef COMPONENT_H
#define COMPONENT_H

#include "json.hpp"

class Component {
	unsigned int id = 0;
public:
	Component();
	~Component();
	void Initialize();
	void Destroy();
	unsigned int GetComponentId();
	void Update();
	void Load(json::JSON& node);
};

#endif