// mytime1.cpp -- implementing Time class methods
#include <iostream>
#include "mytime1.h"

Time::Time()
{
	hours = mins = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	mins = m;
}

void Time::AddMin(int m)
{
	mins += m;
	hours += mins/60;
	mins %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	mins = m;
}

Time Time::operator+(const Time & t) const
{
	Time sum;
	sum.mins = t.mins + mins;
	sum.hours = t.hours + hours + sum.mins/60;
	sum.mins %= 60;
	return sum;
}

void Time::Show() const
{
	std::cout << "Hours: " << hours << ", minutes: " << mins << ".\n";
}

