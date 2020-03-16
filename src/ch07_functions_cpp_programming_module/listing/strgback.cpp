// strgback.cpp -- a function that returns a pointer to char
#include<iostream>

char* buildstr(char c, int n);

int main()
{
   using namespace std;
   int times;
   char ch;

   cout<<"Enter a character: ";
   cin>>ch;
   cout<<"Enter a integer: ";
   cin>>times;
   char *ps = buildstr(ch, times);
   cout<<ps<<endl;
   delete [] ps;

   ps = buildstr('+', 1000);
   cout<<ps<<"-Done-"<<ps<<endl;
   delete [] ps;

   return 1;
}

char* buildstr(char c, int n)
{
    char* pstr = new char[n+1];
    pstr[n] = '\0';
    while(n-- > 0)
    {
        pstr[n] = c;
    }
    return pstr;
}
