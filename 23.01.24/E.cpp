#include <iostream>
#include <cstdio>
#include <climits>
#include <string>
using namespace std;

int main()
{
    int a;
    int i;
    cin >> a;
    cin >> i;
    int power = 1 << i;
    int final = a & power;
    if (final > 0) {cout << 1;}
    else {cout << 0;}
}