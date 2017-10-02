#include "NYTimer.h"

NYTimer::NYTimer()
{
	QueryPerformanceCounter(&lastUpdateTime);
	LARGE_INTEGER li_freq;
	QueryPerformanceFrequency(&li_freq);
	freq = li_freq.QuadPart;
	freq /= 1000;
}

void NYTimer::start(void)
{
	QueryPerformanceCounter(&lastUpdateTime);
}

float NYTimer::getElapsedSeconds() const
{
	LARGE_INTEGER timeNow;
	QueryPerformanceCounter(&timeNow);
	LONGLONG elapsedLong = timeNow.QuadPart - lastUpdateTime.QuadPart;

	float elapsed = (float)((float)elapsedLong / (float)freq);
	elapsed /= 1000.0f;

	return elapsed;
}

unsigned long NYTimer::getElapsedMs() const
{
	LARGE_INTEGER timeNow;
	QueryPerformanceCounter(&timeNow);
	LONGLONG elapsedLong = timeNow.QuadPart - lastUpdateTime.QuadPart;

	unsigned long elapsed = (unsigned long)((float)elapsedLong / (float)freq);

	return elapsed;
}

void NYTimer::restart()
{
	LARGE_INTEGER timeNow;
	QueryPerformanceCounter(&timeNow);
	lastUpdateTime = timeNow;
}