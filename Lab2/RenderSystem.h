#pragma once

#ifndef RENDER_SYSTEM_H
#define RENDER_SYSTEM_H

#include "json.hpp"

#define SDL_MAIN_HANDLED
#include <SDL.h>

class RenderSystem {
	std::string name;
	unsigned int width;
	unsigned int height;
	bool fullscreen;
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;

public:
	RenderSystem();
	~RenderSystem();
	void Initialize();
	void Destroy();
	void Update();
	void Load(json::JSON& node);
};


#endif