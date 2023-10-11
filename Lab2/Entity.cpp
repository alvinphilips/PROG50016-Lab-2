#include "Entity.h"

Entity::Entity() {
	std::cout << "Entity Created" << std::endl;
}

Entity::~Entity() {
	std::cout << "Entity Destructed" << std::endl;
}

void Entity::Initialize() {
	components.clear();
	std::cout << "Entity Initialized" << std::endl;
}

void Entity::Destroy() {
	for (auto c: components) {
		c->Destroy();
		delete c;
	}
	components.clear();
	std::cout << "Entity Destroyed" << std::endl;
}

void Entity::AddComponent(Component* _component) {
	components.push_back(_component);
}

void Entity::RemoveComponent(Component* _component) {
	components.remove(_component);
}

void Entity::Update() {
	for (auto c: components) {
		c->Update();
	}
}

std::string& Entity::GetName() {
	return name;
}

void Entity::Load(json::JSON node) {

}