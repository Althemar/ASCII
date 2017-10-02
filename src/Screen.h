#pragma once

#include <windows.h>
#include <iostream>

class Screen
{
private:
	short _width;
	short _height;

	HANDLE _hOutput;
	COORD _dwBufferSize;
	COORD _dwBufferCoord;
	SMALL_RECT _rcRegion;

	CHAR_INFO * _buffer;

public:
	Screen(short width, short height);
	~Screen();
	void display();
	void draw(short x, short y, char character, int color);

};