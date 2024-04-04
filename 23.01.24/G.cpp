#include <iostream>
#include <cstdio>
#include <climits>
#include <string>
using namespace std;

int main()
{
    int a;
    cin >> a;
    string s = "";
    for (int i = 7; i >=0; i--)
    {
        int c;
        if ((a & (1 << i)) > 0) {cout << 1;}
        else {cout << 0;}
    }
}