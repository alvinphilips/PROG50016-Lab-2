#include "Component.h"

#include <iostream>

Component::Component() {
	std::cout << "Component Created" << std::endl;
}

Component::~Component() {
	std::cout << "Component Destructed" << std::endl;
}

void Component::Initialize() {
	std::cout << "Component Initialized" << std::endl;
}

void Component::Destroy() {
	std::cout << "Component Destroyed" << std::endl;
}

unsigned int Component::GetComponentId() {
	return id;
}

void Component::Update() {
	
}

void Component::Load(json::JSON node) {
	std::cout << "Component Loaded" << std::endl;
}