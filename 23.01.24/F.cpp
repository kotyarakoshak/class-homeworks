#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main()
{
    int a;
    int i;
    cin >> a >> i;
    cout << (a ^ (1 << i));
}