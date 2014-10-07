#include "stdafx.h"

class File{

private:
	std::string path;

public:
	File(std::string path);
	~File();

	void readTextInto(std::string& target);
};