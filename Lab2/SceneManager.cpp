#include "SceneManager.h"

SceneManager::SceneManager() {
	std::cout << "SceneManager Created" << std::endl;
}

SceneManager::~SceneManager() {
	std::cout << "SceneManager Destructed" << std::endl;
}

void SceneManager::Initialize() {
	scenes.clear();
	std::cout << "SceneManager Initialized" << std::endl;
}

void SceneManager::Destroy() {
	for (auto s: scenes) {
		s->Destroy();
		delete s;
	}
	scenes.clear();
	std::cout << "SceneManager Destroyed" << std::endl;
}

void SceneManager::AddScene(Scene* _scene) {
	scenes.push_back(_scene);
}

void SceneManager::RemoveScene(Scene* _scene) {
	scenes.remove(_scene);
}

void SceneManager::Update() {
	for (auto s: scenes) {
		s->Update();
	}
}

void SceneManager::Load(json::JSON node) {

} 