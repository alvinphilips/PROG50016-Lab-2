#include "Scene.h"

Scene::Scene() {
	std::cout << "Scene Created" << std::endl;
}

Scene::~Scene() {
	std::cout << "Scene Destructed" << std::endl;
}

void Scene::Initialize() {
	entities.clear();
	std::cout << "Scene Initialized" << std::endl;
}

void Scene::Destroy() {
	for (auto e: entities) {
		e->Destroy();
		delete e;
	}
	entities.clear();
	std::cout << "Scene Destroyed" << std::endl;
}

void Scene::AddEntity(Entity* _entity) {
	entities.push_back(_entity);
}

void Scene::RemoveEntity(Entity* _entity) {
	entities.remove(_entity);
}

void Scene::Update() {
	for (auto e: entities) {
		e->Update();
	}
}

void Scene::Load(json::JSON node) {

}