// exercises2.cpp -- Write a C++ program that asks for a distance in furlongs and converts it to yards

#include<iostream>

int main()
{
	using namespace std;

	cout << "Please input a number as furlongs: ";
	int furlongs;
	cin >> furlongs;
	cout << furlongs << " furlongs is equal to " << furlongs * 220 << " yards." << endl;
	//cin.get();
	system("pause");
	return 0;
}