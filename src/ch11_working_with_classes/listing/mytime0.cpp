// mytime0.cpp -- implementing Time methods
#include <iostream>
#include "mytime0.h"

Time::Time()
{
	hours = mins = 0;
}

Time::Time(int hr, int m)
{
	hours = hr;
	mins = m;
}

void Time::AddMin(int m)
{
	mins = (mins + m)%60;
	hours += (mins + m)/60;
}

void Time::AddHr(int hr)
{
	hours += hr;
}

void Time::Reset(int hr, int m)
{
	hours = hr;
	mins = m;
}

Time Time::Sum(const Time & t) const
{
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours + sum.mins/60;
	sum.mins %= 60;
	return sum;
}

void Time::Show() const
{
	std::cout<< hours << " hours, " << mins << " minutes.\n";
}
