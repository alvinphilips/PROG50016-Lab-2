#include "RenderSystem.h"

RenderSystem::RenderSystem() : width{ 0 }, height{ 0 }, fullscreen{ false } {
	std::cout << "RenderSystem Created" << std::endl;
}

RenderSystem::~RenderSystem() {
	std::cout << "RenderSystem Destructed" << std::endl;
}

void RenderSystem::Initialize() {
	std::cout << "RenderSystem Initialized" << std::endl;
}

void RenderSystem::Destroy() {
	std::cout << "RenderSystem Destroyed" << std::endl;
}

void RenderSystem::Update() {
	// TODO: Add SDL stuff here
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