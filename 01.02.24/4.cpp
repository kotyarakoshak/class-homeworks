///Write overloaded functions `void print(int)` and `void print(double)` that
/// print an integer and a double, respectively.

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void print(int a)
{
    cout << a << endl;
}

void print(double b)
{
    cout << b;
}

int main()
{
    int c = 34;
    double d = 4567;
    print(c);
    print(d);
}