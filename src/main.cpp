#include <iostream>

#include <windows.h>
#include <stdlib.h>
#include "NYTimer.h"
#include "Screen.h"

using namespace std;


int main()
{
	//getAscyncKeystroke

	NYTimer t;
	t.start();

	NYTimer t2;
	t.start();

	Screen screen(40, 40);

	screen.draw( 5, 10, 'H', 0x0E );
	screen.draw( 5, 11, 'i', 0x0B );
	screen.draw( 5, 12, '!', 0x0A );

	screen.display();


	/*int test = 0;

	int color1 = 0x0E;
	int color2 = 0x0B;
	int color = color1;

	while (true)
	{
		if (t.getElapsedMs() > 16.f)
		{
			for (int i = 0; i < SCREEN_WIDTH; ++i)
				for (int j = 0; j < SCREEN_HEIGHT; ++j) {
					screen.draw('0', color, 0, 0);
				}
			screen.display();
			t.restart();
		}

		if (t2.getElapsedMs() > 100)
		{
			color = (color == color1 ? color2 : color1);
			t2.restart();
		}

	}*/
	
	
	char c;
	cin >> c;
}