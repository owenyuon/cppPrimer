// e4.cpp -- Write a program that asked the user to enter his or her age, the program then should display the age in months

#include <iostream>

using namespace std;

int main()
{
	cout << "Please input your age: ";
	double dAge; 
	cin >> dAge;
	cout << "Your age is " << dAge * 12 << " months" << endl;

	system("pause");

	return 0;
}