#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

double pi = acos(-1);
double circle_area(double R, double &P)
{
    double S = pi*R*R;
    P = 2*pi*R;
    return S;

}

int main() 
{
    double pp;
    double S = circle_area(5, pp);
    cout << S << endl;
    cout << pp << endl;
    return  0;
}