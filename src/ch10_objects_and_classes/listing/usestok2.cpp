// usestok2.cpp -- using the Stock class
#include <iostream>
#include "stock20.h"

const int STKS = 4;

int main()
{
	// create an array of initialized objects
    Stock stocks[STKS] = 
	{
		Stock("NanoSmart", 12, 20.0),
		Stock("Npffp Pnkects", 200, 2.0),
		Stock("Monolithic Obelistk", 120, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
	};
	std::cout << "Stock holdings: \n";
	for (int st = 0; st < STKS; st++)
	{
		stocks[st].show();
	}

	// set poiner to first element
	const Stock* top = &stocks[0];
	for (int st = 1; st < STKS; st++)
	{
		top = &top->topval(stocks[st]);
	}
	// now top points to the most valuable holding
	std::cout << "\nMost valuable holding:\n";
    top->show();

	return 0;
}
