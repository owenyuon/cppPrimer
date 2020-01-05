// e6.cpp -- Write a program that has main() call a user-defined function that takes a distance in 
//			 light years as an argument and then returns the distance in astronomical units.

#include <iostream>

using namespace std;

double lightYear2AstronomicalUnit(double dLightYear);

int main()
{
	cout << "Enter the number of light years:";
	double dLightYear;
	cin >> dLightYear;
	cout << dLightYear << " light years = " << lightYear2AstronomicalUnit(dLightYear) << " astronomical units" << endl;

	system("pause");
	return 0;
}

double lightYear2AstronomicalUnit(double dLightYear)
{
	return dLightYear * 63240;
}