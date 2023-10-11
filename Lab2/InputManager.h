#pragma once

#ifndef INPUT_MANAGER_H
#define INPUT_MANAGER_H

#include "json.hpp"

class InputManager {
public:
	InputManager();
	~InputManager();
	void Initialize();
	void Destroy();
	void Update();
	void Load(json::JSON node);
};

#endif