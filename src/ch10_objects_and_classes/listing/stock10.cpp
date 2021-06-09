// stock10.cpp -- Stock class with constructors, destructor added
#include <iostream>
#include "stock10.h"

// constructors (verbose version)
Stock::Stock()
{
	std::cout << "Default constructor called\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
	std::cout << "Constructor using " << co << " called\n";
	company = co;

	if (n < 0)
	{
		std::cout << "Number of share cannot be negative. " 
			      << company << " shares set to 0. \n";
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	set_tot();
}

// verbose class destructor
Stock::~Stock()
{
	std:: cout << "Bye, " << company << "!\n";
}

// other method
void Stock::buy(long n, double price)
{
	if (n < 0)
	{
		std::cout << "Number of shares purchased cannot be negative. "
			      << "Transaction is aborted. \n";
	}
	else
	{
		shares += n;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long n, double price)
{
	if (n < 0)
	{
		std::cout << "Number of shares sold cannot be negative. "
			      << "Transaction is aborted. \n";
	}
	else if (n > shares)
	{
		std::cout << "You cannot sell more than you have! "
			      << "Transaction is aborted. \n";
	}
	else
	{
		shares -= n;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	using std::cout;
	using std::ios_base;
	// set format to #.###
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	cout << "Company: " << company 
		 << " Share: " << shares << "\n";
	cout << " Share price: $" << share_val;

	// set format to #.##
	cout.precision(2);
	cout << ". Total worth: $" << total_val << "\n";

	// restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}



