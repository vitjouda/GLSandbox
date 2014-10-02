#include "KeyboardControl.h"

KeyboardControl KeyboardControl::keyboardControl;

KeyboardControl::KeyboardControl() {
}

KeyboardControl::~KeyboardControl() {
}

void KeyboardControl::keyboardCallback(GLFWwindow *window, int a, int b, int c, int d) {
	keyboardControl.controlKeyboard(window, a, b, c, d);
}

void KeyboardControl::controlKeyboard(GLFWwindow *, int a, int b, int c, int d) {
	std::cout << a;
}
