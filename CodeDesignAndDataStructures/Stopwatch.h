#pragma once

#include <chrono>


class Stopwatch
{
	//total milliseconds elapsed with this stopwatch
	std::chrono::milliseconds totalMilSec;
	// The time at witch the stopwatch was las started
	std::chrono::high_resolution_clock::time_point lastStartTime;
	// placeholder varible for how many milliseconds elapse
	std::chrono::milliseconds millElap;

public:
	//initilize
	Stopwatch();
	
	//start the stopwatch udtate total time
	void start();
	//stop the startwath
	void stop();

	//return a copy of the inderlying countof milliseconds
	std::chrono::milliseconds elapsed();
	//return number of milliseconds recorded with sw
	double milliCount();
	//return number of seconds recorded by stopwatch
	double secondCount();

	//clear the stopwatch
	void reset();
};

