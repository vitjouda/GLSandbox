#include "Shader.h"

Shader::Shader(std::string path, GLuint shaderType) {
	this->path = path;
	this->shaderType = shaderType;
}

Shader::~Shader() {
}

void Shader::load(){
	File file(path);

	file.readTextInto(shaderCode);
}

void Shader::compile(){
	shaderId = glCreateShader(shaderType);
	const char* const shaderCStr = shaderCode.c_str();

	glShaderSource(shaderId, 1, &shaderCStr, nullptr);
	glCompileShader(shaderId);
}
