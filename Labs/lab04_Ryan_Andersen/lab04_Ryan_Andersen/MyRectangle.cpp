#include "MyRectangle.h"

MyRectangle::MyRectangle() {
	height = 0;
	width = 0;
}

MyRectangle::MyRectangle(int h, int w) {
	height = h;
	width = w;
}

int MyRectangle::getArea() {
	return height * width;
}

int MyRectangle::getHeight() {
	return height;
}

int MyRectangle::getWidth() {
	return width;
}