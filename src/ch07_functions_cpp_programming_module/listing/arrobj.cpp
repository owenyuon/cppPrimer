// arrobj.cpp -- functions with array objects (c++11)
#include<iostream>
#include<array>
#include<string>

// const data
const int Seasons =4;
const std::array<std::string, Seasons> Snames = 
    {"Spring", "Summer", "Autumn", "Winter"};

// functions to modify array objects
void fill(std::array<double, Seasons> *pa);

// function that uses aray object without modifying it
void show(std::array<double, Seasons> da);

int main()
{
    std::array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 1;
}

void fill(std::array<double, Seasons> *pa)
{
    using namespace std;
    for(int i=0; i<Seasons; i++)
    {
        cout<<"Enter "<<Snames[i]<<" expense: ";
        cin>>(*pa)[i];
    }
}

void show(std::array<double, Seasons> da)
{
    using namespace std;
    double total = 0.0;
    cout<<"\nExpense:\n";
    for(int i=0; i<Seasons; i++)
    {
        cout<<Snames[i]<<": $"<<da[i]<<endl;
        total+=da[i];
    }
    cout<<"Total expenses: $"<<total<<endl;
}

