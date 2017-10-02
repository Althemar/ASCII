#pragma once

#include <windows.h>
#include <iostream>


class Screen
{
private:
	int _width;
	int _height;

	CHAR_INFO ** _buffer;

public:
	Screen(int width, int height);
	~Screen();

};