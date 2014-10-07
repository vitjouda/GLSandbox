#pragma once

#include "stdafx.h"
#include "File.h"

class Shader {

public:
	GLuint shaderId;

private:
	GLuint shaderType;
	
	std::string path;
	std::string shaderCode;

public:
	Shader(std::string path, GLuint shaderType);
	~Shader();

	void load();
	void compile();
	void link();
};

