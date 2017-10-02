#pragma once

#include <windows.h>
#include <iostream>

/*
====================
Screen
Class used to draw images and characters on the terminal
====================
*/
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

	void display();	//Refresh the terminal
	void clear();
	void draw(short x, short y, char character, int color); //Draw a character on the terminal


};
