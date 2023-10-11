#pragma once

#ifndef ASSET_MANAGER_H
#define ASSET_MANAGER_H

#include "json.hpp"

class AssetManager {
public:
	AssetManager();
	~AssetManager();
	void Initialize();
	void Destroy();
	void Update();
	void Load(json::JSON& node);
};

#endif