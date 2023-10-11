#include "RenderSystem.h"

RenderSystem::RenderSystem() : width{ 0 }, height{ 0 }, fullscreen{ false } {
	std::cout << "RenderSystem Created" << std::endl;
}

RenderSystem::~RenderSystem() {
	std::cout << "RenderSystem Destructed" << std::endl;
}

void RenderSystem::Initialize() {
	std::cout << "RenderSystem Initialized" << std::endl;

	window = SDL_CreateWindow(name.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, 0);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

void RenderSystem::Destroy() {
	SDL_DestroyRenderer(renderer);
	renderer = nullptr;
	SDL_DestroyWindow(window);
	window = nullptr;

	// Should we call this here?
	SDL_Quit();

	std::cout << "RenderSystem Destroyed" << std::endl;
}

void RenderSystem::Update() {
	SDL_Event event;
	while(SDL_PollEvent(&event)) {
		// TODO: Handle events
	}
	SDL_SetRenderDrawColor(renderer, 44, 52, 235, 255);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}

void RenderSystem::Load(json::JSON& node) {
	std::cout << "RenderSystem Loading" << std::endl;

	if (node.hasKey("Name")) {
		name = node["Name"].ToString();
	}
	if (node.hasKey("width")) {
		width = (unsigned int) node["width"].ToInt();
	}
	if (node.hasKey("height")) {
		height = (unsigned int) node["height"].ToInt();
	}
	if (node.hasKey("fullscreen")) {
		fullscreen = node["fullscreen"].ToBool();
	}
}