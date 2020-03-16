// fun_ptr.cpp -- pointers to function
#include <iostream>

double betsy(int);
double pam(int);

// second artument is pointer to a type double function that
// take a type in argument
void estimate(int lines, double (*pf)(int));

int main()
{
    using namespace std; 
    int code;
    cout << "How  many lines of coded do you need? ";
    cin >>code;
    cout<<"Here's Betsy's estimate: \n";
    estimate(code, betsy);

    cout<<"Here's Pam's estimate: \n";
    estimate(code, pam);

    return 1;
}

double betsy(int lns)
{
    return 0.05 * lns;
}

double pam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
    using namespace std;
    cout<<lines<<" lines will talk ";
    cout<<(*pf)(lines) <<" hours\n";
}
