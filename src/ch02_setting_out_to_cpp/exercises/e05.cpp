// e5.cpp -- Write a program that has main() call a user-defined function that takes a Celsius
//			 temperature valuse as an argument and then returns the equivalent Fahrenheit value

#include <iostream>

using namespace std;

double C2F(double dTempInC);

int main()
{
	double dInput;
	cout << "Please input the temperature in C: ";
	cin >> dInput;
	cout << dInput << " Celsius degree is " << C2F(dInput) << " Fahrenheig degree." << endl;

	system("pause");
	return 0;
}

double C2F(double dTempInC)
{
	return 1.8 * dTempInC + 32;
}