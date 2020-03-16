// arrfun4.cpp -- functions with a array range
# include <iostream>

const int ArSize = 8;

int sum_arr(const int* begin, const int* end);

int main()
{
    using namespace std;
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    
    int sum = sum_arr(cookies, &cookies[ArSize]);
    cout<<"Total cookies eaten: "<<sum<<".\n";
    
    sum = sum_arr(cookies, cookies+3);
    cout<<"First three eaters ate: "<<sum<<endl;

    sum = sum_arr(cookies+4, cookies+ArSize);
    cout<<"Last four eaters ate: "<<sum<<endl;

    return 1;
}

int sum_arr(const int* begin, const int* end)
{
    const int* pt;
    int total=0;
    for(pt = begin; pt!=end; pt++)
    {
        total+=*pt;
    }
    return total;
}
