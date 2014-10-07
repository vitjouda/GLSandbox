#include "File.h"

File::File(std::string path){
	this->path = path;
}

File::~File(){

}

void  File::readTextInto(std::string& target){
	std::ifstream fileStream;
	fileStream.open(path);
	target.assign((std::istreambuf_iterator<char>(fileStream)),
		std::istreambuf_iterator<char>());
	fileStream.close();
}