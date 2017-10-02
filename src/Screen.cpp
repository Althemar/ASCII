#include "Screen.h"

Screen::Screen(int width, int height) : _width(width), _height(height)
{
	_buffer = new CHAR_INFO * [width];
	for( unsigned i = 0; i < width; ++i )
		_buffer[i] = new CHAR_INFO[height];
}

Screen::~Screen()
{
	for (unsigned i = 0; i < _width; ++i)
		delete[](_buffer[i]);
	delete[](_buffer);
}