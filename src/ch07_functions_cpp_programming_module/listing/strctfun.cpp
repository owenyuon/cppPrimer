// strcfun.cpp -- functions with structure argument
#include<iostream>
#include<cmath>
#include <iterator>

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

// prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
rect polar_to_rect(polar dapos);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout<<"Enter the x and y values: ";
    while(cin>>rplace.x>>rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout<<"Next two numbers (q to quit): ";
    }
    cout<<"Done\n";
    return 1;
}

polar rect_to_polar(rect xypos)
{
    polar res;
    res.angle = std::atan(xypos.y/xypos.x);
    res.distance = std::sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    return res;
}

void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577;
    cout<<"distance = "<<dapos.distance;
    cout<<"angle = "<<dapos.angle * Rad_to_deg;
    cout<<" degrees\n";
}

rect polar_to_rect(polar dapos)
{
    rect res;
    res.x = std::cos(dapos.angle) * dapos.distance;
    res.y = std::sin(dapos.angle) * dapos.distance;
    return res;
}
