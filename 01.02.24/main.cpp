#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

double circleArea(double R)
{
    double area (M_PI * R * R);
    return area;
}

int main()
{
    double x = 5;
    double S = circleArea(x);
    cout << S;

}