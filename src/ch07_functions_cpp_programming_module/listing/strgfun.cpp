// strgfun.cpp -- functions with a string argument
#include<iostream>

unsigned int c_in_str(const char* str, char ch);

int main()
{
    using namespace std;
    char mmm[15] = "minimum";

    const char* wall = "ululate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wall, 'u');

    cout<<ms<<" m characters in "<<mmm<<endl;
    cout<<us<<" u characters in "<<wall<<endl;

    return 1;
}

unsigned int c_in_str(const char* str, char ch)
{
    unsigned int cnt = 0;
    while(*str)
    {
        if(*str == ch)
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}
