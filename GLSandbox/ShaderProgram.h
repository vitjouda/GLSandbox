#pragma once

#include "stdafx.h"
#include "Shader.h"

class ShaderProgram {

private:
	Shader vertexShader;
	Shader fragmentShader;

	GLuint shaderProgramId;

public:
	ShaderProgram(Shader vertexShader, Shader fragmentShader);
	~ShaderProgram();

	void link();
};

