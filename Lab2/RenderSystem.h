#pragma once

#ifndef RENDER_SYSTEM_H
#define RENDER_SYSTEM_H

#include "json.hpp"

class RenderSystem {
	std::string name;
	unsigned int width;
	unsigned int height;
	bool fullscreen;

public:
	RenderSystem();
	~RenderSystem();
	void Initialize();
	void Destroy();
	void Update();
	void Load(json::JSON& node);
};


#endif