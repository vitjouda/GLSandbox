#pragma once

#include "stdafx.h"
#include "AbstractControl.h"

class KeyboardControl : public AbstractControl {

public:
	static KeyboardControl keyboardControl;

private:
	KeyboardControl();
	virtual ~KeyboardControl();

public:	
	static void keyboardCallback(GLFWwindow *, int a, int b, int c, int d);

private:
	void controlKeyboard(GLFWwindow *, int a, int b, int c, int d);
};
