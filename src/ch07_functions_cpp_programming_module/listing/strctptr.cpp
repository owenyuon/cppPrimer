// strctptr.cpp -- functions with pointer to structure arugment
#include <iostream>
#include <cmath>

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar * rect_to_polar(const rect* xypos);
void show_polar(const polar *dapos);

int main()
{
    using namespace std;
    rect *rplace = new rect;
    polar *pplace;
    cout<<"Please enter x and y coordinates: ";
    while(cin>>rplace->x>>rplace->y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout<<"Please enter another pair of x and y coordinate (q to quit): ";
    }
    cout<<"Done!"<<endl;
    delete rplace;
    delete pplace;
    return 1;
}

polar * rect_to_polar(const rect *xypos)
{
    polar *res = new polar;
    res->distance = std::sqrt(xypos->x * xypos->x + xypos->y * xypos->y);
    res->angle = std::atan(xypos->y / xypos->x);
    return res;
}

void show_polar(const polar* dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577;
    cout<< "distance = "<<dapos->distance<<" meters, ";
    cout<<"angle = "<<dapos->angle * Rad_to_deg <<" degrees."<<endl;
}
