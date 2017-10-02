#include "Drawable.h"

Drawable::Drawable(int width, int height, char text[], int colors[])
{
	_width = width;
	_height = height;

	_buffer = new CHAR_INFO[width * height];

	for (int i = 0; i < width * height; ++i) {
		_buffer[i].Char.AsciiChar = text[i];
		_buffer[i].Attributes = colors[i];
	}
}
