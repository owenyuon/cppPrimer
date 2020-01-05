// exercises3.cpp -- Write a C++ program that uses three user-defined functions 
//                   (counting main() as one) and produces the following outputs:
//					Three blind mice
//					Three blind mice
//                  See how they run
//					See how they run

#include <iostream>

using namespace std;

void showText_1();
void showText_2();

int main()
{
	showText_1();
	showText_1();
	showText_2();
	showText_2();
	system("pause");
	return 0;
}

void showText_1()
{
	cout << "Three blind mice" << endl;
}

void showText_2()
{
	cout << "See how they run" << endl;
}