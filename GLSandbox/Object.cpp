#include "Object.h"


Object::Object() {
}


Object::~Object() {
}

float* Object::getVerticesData(){
	return vertices.data();
}

void Object::setVertices(std::vector<float> vertices){
	this->vertices = vertices;
}
