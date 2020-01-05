// e7.cpp -- Write a program that asks the user to enter an hour value and a minute value. The
//			 main() function should then pass these two values to a type void function that 
//			 displays the two values in the format shown in the following sample run:
//			 Enter the number of hours: 9
//			 Enter the number of minutes: 28
//			 Time: 9:28

#include <iostream>

using namespace std;

void DisplayFunc(int iHour, int iMinute);

int main()
{
	int iHour, iMinute;

	cout << "Enter the number of hours: ";
	cin >> iHour;
	cout << "Enter the number of minutes: ";
	cin >> iMinute;

	DisplayFunc(iHour, iMinute);

	system("pause");
	return 0;
}

void DisplayFunc(int iHour, int iMinute)
{
	cout << "Time: " << iHour << ":" << iMinute << endl;
}