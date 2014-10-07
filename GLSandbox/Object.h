#pragma once

#include "stdafx.h"

class Object {

private:

	std::vector<float> vertices;

public:
	Object();
	~Object();

	void setVertices(std::vector<float> vertices);
	float* getVerticesData();

};

