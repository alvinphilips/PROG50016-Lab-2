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

}

void RenderSystem::Load(json::JSON node) {

}