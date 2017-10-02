#include <iostream>

#include <windows.h>
#include <stdlib.h>
#include "NYTimer.h"
#include "Screen.h"

using namespace std;

#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 40

int main()
{

	HANDLE hOutput = (HANDLE)GetStdHandle(STD_OUTPUT_HANDLE);

	COORD dwBufferSize = { SCREEN_WIDTH,SCREEN_HEIGHT };
	COORD dwBufferCoord = { 0, 0 };
	SMALL_RECT rcRegion = { 0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1 };

	CHAR_INFO buffer[SCREEN_HEIGHT][SCREEN_WIDTH];

	ReadConsoleOutput(hOutput, (CHAR_INFO *)buffer, dwBufferSize,dwBufferCoord, &rcRegion);


	for( int i = 0; i < SCREEN_WIDTH; ++i)
		for (int j = 0; j < SCREEN_HEIGHT; ++j){
			buffer[j][i].Char.AsciiChar = '0';
			buffer[j][i].Attributes = 0x0E;
		}

	/*buffer[5][10].Char.AsciiChar = 'H';
	buffer[5][10].Attributes = 0x0E;
	buffer[5][11].Char.AsciiChar = 'i';
	buffer[5][11].Attributes = 0x0B;
	buffer[5][12].Char.AsciiChar = '!';
	buffer[5][12].Attributes = 0x0A;*/

	//getAscyncKeystroke

	/*NYTimer t;
	t.start();

	NYTimer t2;
	t.start();

	int test = 0;

	int color1 = 0x0E;
	int color2 = 0x0B;
	int color = color1;

	while (true)
	{
		if (t.getElapsedMs() > 16.f)
		{
			for (int i = 0; i < SCREEN_WIDTH; ++i)
				for (int j = 0; j < SCREEN_HEIGHT; ++j) {
					buffer[j][i].Char.AsciiChar = '0';
					buffer[j][i].Attributes = color;
				}

			WriteConsoleOutput(hOutput, (CHAR_INFO *)buffer, dwBufferSize, dwBufferCoord, &rcRegion);
			t.restart();
		}

		if (t2.getElapsedMs() > 100)
		{
			color = (color == color1 ? color2 : color1);
			t2.restart();
		}

	}
	
	*/
	char c;
	cin >> c;
}