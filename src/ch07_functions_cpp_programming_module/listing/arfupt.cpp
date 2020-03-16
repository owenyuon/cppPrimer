// arfupt.cpp -- an array of function pointers
#include <iostream>

// various notations, same sinagures
const double * f1(const double ar[], int n);
const double * f2(const double[], int);
const double * f3(const double*, int);

int main()
{
    using namespace std;
    double av[3] = {1112.3, 1542.6, 2227.9};

    // pointer to a funciton
    const double * (*p1)(const double *, int) = f1;
    
    auto p2 = f2;   // c++ automatic type deduction
    // pre-c++11 can use the following code instead
    // const double *(*p2)(const double *, int) = f2
    
    cout<<"Using pointers to functions:\n";
    cout<<" Address Value\n";
    cout<<(*p1)(av, 3)<<": "<<*(*p1)(av, 3)<<endl;
    cout<<p2(av, 3)<<": "<<*p2(av, 3)<<endl;

    // pa an array of function
    // auto doesn't work with list initializtion
    const double * (*pa[3])(const double ar[], int n)={f1, f2, f3};
    // but it does work for initializing to a single value
    
    // pb  apointer to fisrt element of pa
    auto pb = pa;

    // pre-c++11 can us the following code instread
    // const double * (**pb)(const double arp[], int n) = pa;
    cout<<"\nUsing an array of pointers to functions:\n";
    cout<<" Address Value\n";
    for(int i=0; i<3; i++)
    {
        cout<<pa[i](av, 3)<<": "<<*pa[i](av, 3)<<endl;
    }

    cout<<"\nUsing a poiner to a pointer to a function:\n";
    cout<<" Address Value:\n";
    for(int i=0; i<3; i++)
    {
        cout<<pb[i](av, 3)<<": "<<*pb[i](av, 3)<<endl;
    }

    // what about a pointer to anarray of function pointers...OMG
    cout<<"\nUsing pointers to an array of pointers:\n";
    cout<<" Address Value:"<<endl;
    // easy way to declae pc
    auto pc = &pa;
    // pre-c++11 can use the following code instead
    // const double * (*(*pd)[3])(const double ar[], int) = &pa;
    cout<<(*pc)[0](av, 3)<<": "<<*(*pc)[0](av, 3)<<endl;

    // hard way to declae pd
    const double * (*(*pd)[3])(const double ar[], int n) = &pa;
    // store return value in pdb
    const double * pdb = (*pd)[1](av, 3);
    cout<<pdb<<": "<<*pdb<<endl;

    // alternative notation
    cout<<(*(*pd)[2])(av, 3)<<": "<<*(*(*pd)[2])(av, 3)<<endl;

    return 0;

}

// some rather dull functions
const double * f1(const double *ar, int n)
{
    return ar;
}

const double * f2(const double ar[], int n)
{
    return ar+1;
}

const double * f3(const double ar[], int n)
{
    return ar+2;
}
