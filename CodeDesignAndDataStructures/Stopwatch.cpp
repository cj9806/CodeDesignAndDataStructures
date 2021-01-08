#include "Stopwatch.h"

Stopwatch::Stopwatch() {
	reset();
}

void Stopwatch::start(){
	lastStartTime = std::chrono::high_resolution_clock::now();
}

void Stopwatch::stop(){
	auto timeElap = std::chrono::high_resolution_clock::now() - lastStartTime;
	//records time elap in nanoseconds so i need to convert it
	millElap = std::chrono::duration_cast<std::chrono::milliseconds>(timeElap);
	totalMilSec += millElap;
}


std::chrono::milliseconds Stopwatch::elapsed(){
	return millElap;
}


double Stopwatch::milliCount() {
	return totalMilSec.count();
}

double Stopwatch::secondCount() {
	std::chrono::seconds secondsElapsed = std::chrono::duration_cast<std::chrono::seconds>(totalMilSec);
	return secondsElapsed.count();
}

void Stopwatch::reset() {
	totalMilSec = std::chrono::milliseconds();
}