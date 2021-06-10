// stock20.cpp -- augmented version
#include <iostream>
#include "stock20.h"

// constructors
Stock::Stock()  // default constructor
{
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
	company = co;
	if ( n < 0)
	{
		std::cout << "Number of shares cannot be negative; "
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

// class destructor
Stock::~Stock()  // quiet class destructor 
{
}

// other methods
void Stock::buy(long num, double pr)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased cannot be negative. "
			      << "Transaction is aborted. \n";
	}
	else
	{
		shares += num;
		share_val = pr;
		set_tot();
	}
}

void Stock::sell(long num, double pr)
{
	if (num < 0)
	{
		std::cout << "Number of shares sold cannot be negative. "
			      << "Transaction is aborted. \n";
	}
	else if (num < shares)
	{
		std::cout << "You cannot sell more than you have! "
			      << "Transaction is aborted. \n";
	}
	else
	{
		shares -= num;
		share_val = pr;
		set_tot();
	}
}

void Stock::update(double pr)
{
	share_val = pr;
	set_tot();
}

void Stock::show() const
{
	using std::cout;
	using std::ios_base;
	// set format to #.###
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	cout << "Company: " << company
		 << " Shares: " << shares << "\n";
	cout << "Share Price: $" << share_val;

	// set format to #.##
	cout.precision(2);
	cout << " Total Proce: $" << total_val << ". \n\n";

	// restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}

const Stock & Stock::topval(const Stock & s) const
{
	if (s.total_val > total_val)
	{
		return s;
	}
	else
	{
		return *this;
	}
}


