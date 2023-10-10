#include "Object.h"

Object::Object() {
	std::cout << "Object Created" << std::endl;
}

Object::~Object() {
	std::cout << "Object Destructed" << std::endl;
}

void Object::Initialize() {
	initialized = true;
	std::cout << "Object Initialized" << std::endl;
}

void Object::Destroy() {
	initialized = false;
	std::cout << "Object Destroyed" << std::endl;
}

bool Object::IsInitialized() {
	return initialized;
}

void Object::Load(json::JSON node) {

}