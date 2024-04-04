#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

void increment(double &value)
{
    value +=1;
}

int main()
{
    double b;
    cin >> b;
    increment(b);
    cout << b;

    return 0;
}