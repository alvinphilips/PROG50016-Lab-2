#include "InputManager.h"

InputManager::InputManager() {
	std::cout << "InputManager Created" << std::endl;
}

InputManager::~InputManager() {
	std::cout << "InputManager Destructed" << std::endl;
}

void InputManager::Initialize() {
	std::cout << "InputManager Initialized" << std::endl;
}

void InputManager::Destroy() {
	std::cout << "InputManager Destroyed" << std::endl;
}

void InputManager::Update() {
	// TODO: Implement InputManager update
}

void InputManager::Load(json::JSON& node) {
	std::cout << "InputManager Loading" << std::endl;
	// TODO: Implement loading an InputManager
}