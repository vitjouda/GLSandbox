#pragma once
#include "Renderer.h"

class AbstractControl {

public:

private:
	Renderer *renderer = nullptr;
	

public:
	AbstractControl();
	virtual ~AbstractControl();

};

