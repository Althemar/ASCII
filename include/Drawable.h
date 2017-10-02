#pragma once

#include <windows.h>

class Drawable {

private:
	int _width;
	int _height;

	CHAR_INFO * _buffer;

public:
	Drawable(int width, int height, char text[], int colors[]);
};