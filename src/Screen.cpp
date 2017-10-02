#include "Screen.h"

Screen::Screen(short width, short height) :
	_width{ width },
	_height{ height },
	_hOutput{ (HANDLE)GetStdHandle(STD_OUTPUT_HANDLE) },
	_dwBufferSize{ _width,_height },
	_dwBufferCoord{ 0, 0 },
	_rcRegion{ 0, 0, _width - 1, _height - 1 },
	_buffer{ new CHAR_INFO[_width * _height] }
{
	ReadConsoleOutput(_hOutput, _buffer, _dwBufferSize,_dwBufferCoord, &_rcRegion);
}

Screen::~Screen()
{
	delete[](_buffer);
}

void Screen::display()
{
	WriteConsoleOutput(_hOutput, _buffer, _dwBufferSize,_dwBufferCoord, &_rcRegion);
}

void Screen::clear()
{
	for (int i = 0; i < _width * _height; ++i)
		_buffer[i].Char.AsciiChar = ' ';
}

void Screen::draw( short x, short y, char character, int color)
{
	_buffer[_height * x + y].Char.AsciiChar = character;
	_buffer[_height * x + y].Attributes = color;
}