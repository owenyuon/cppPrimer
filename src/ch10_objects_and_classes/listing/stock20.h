// stock20.h -- augmented version
#ifndef STOCK20_H_
#define STOCK20_H_

#include <string>

class Stock
{
private:
	std::string company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();  // default constructor
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock();  // do nothing desctructor
	void buy(long num, double pr);
	void sell(long num, double pr);
	void update(double pr);
	void show() const;
	const Stock & topval(const Stock &s ) const;
};

#endif
