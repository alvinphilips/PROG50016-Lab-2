#pragma once

#ifndef UTILS_H
#define UTILS_H

#include "json.hpp"
#include <fstream>

namespace utils {
	json::JSON give_me_json(const char* filename) {
		std::ifstream input_stream(filename);
		std::string str((std::istreambuf_iterator<char>(input_stream)), std::istreambuf_iterator<char>());
		return json::JSON::Load(str);
	}

	void error_msg(const char* msg) {
		std::cerr << "ERROR: " << msg << std::endl;
	}
}

#endif