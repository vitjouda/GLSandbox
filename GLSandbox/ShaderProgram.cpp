#include "ShaderProgram.h"

ShaderProgram::ShaderProgram(Shader vertexShader, Shader fragmentShader) : vertexShader(vertexShader), fragmentShader(fragmentShader) {
}

ShaderProgram::~ShaderProgram() {
}

void ShaderProgram::link(){
	shaderProgramId = glCreateProgram();
	
	glAttachShader(shaderProgramId, vertexShader.shaderId);
	glAttachShader(shaderProgramId, fragmentShader.shaderId);
	glLinkProgram(shaderProgramId);
}
