#include "AssetManager.h"

AssetManager::AssetManager() {
	std::cout << "AssetManager Created" << std::endl;
}

AssetManager::~AssetManager() {
	std::cout << "AssetManager Destructed" << std::endl;
}

void AssetManager::Initialize() {
	std::cout << "AssetManager Initialized" << std::endl;
}

void AssetManager::Destroy() {
	std::cout << "AssetManager Destroyed" << std::endl;
}

void AssetManager::Update() {
	// TODO: Implement AssetManager update
}

void AssetManager::Load(json::JSON& node) {
	std::cout << "AssetManager Loading" << std::endl;

	// TODO: Implement loading an AssetManager
}