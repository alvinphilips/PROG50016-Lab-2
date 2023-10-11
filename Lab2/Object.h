#pragma once

#ifndef OBJECT_H
#define OBJECT_H

#include "json.hpp"

class Object {
	bool initialized;
public:
	Object();
	~Object();
	void Initialize();
	void Destroy();
	bool IsInitialized();
	void Load(json::JSON& node);
};

#endif