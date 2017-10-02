#pragma once

#include <windows.h>

class Screen
{
private:
	int width;
	int height;

	CHAR_INFO ** buffer;

public:
	Screen();
	~Screen();

};