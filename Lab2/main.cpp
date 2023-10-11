#include "Engine.h"

int main(int argc, char** argv) {
	Engine* engine = new Engine();

	engine->Initialize();
	engine->GameLoop();
	engine->Destroy();

	delete engine;

	return 0;
}