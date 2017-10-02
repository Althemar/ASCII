#pragma once

#include <windows.h>

class NYTimer
{
public:


	NYTimer();

	void start(void);

	float getElapsedSeconds() const;

	unsigned long getElapsedMs() const;

	void restart();

private:
	LARGE_INTEGER lastUpdateTime;
	LONGLONG freq;
};