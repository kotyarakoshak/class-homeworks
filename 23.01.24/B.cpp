#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;
    cout << ((1 << a) | (1 << b)) << endl;
}