// protos.cpp -- using prototype can function calls
#include <iostream>

void cheers(int);
double cube(double);

int main()
{
	using namespace std;
	cheers(5);
	cout<<"Give me a number: ";
	double side;
	cin>>side;
	double volumn = cube(side);	// function calls
	cout<<"A "<<side<<"-foot cube has a volumn of "<<volumn<<" cubic feet."<<endl;
	cheers(cube(2));
	return 0;
}

void cheers(int n)
{
	using namespace std;
	for(int i=0; i<n; i++)
	{
		cout<<"Cheers!"<<endl;
	}
}

double cube(double x)
{
	return x*x*x;
}

