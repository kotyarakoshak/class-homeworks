#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int a[100] {};

int main()
{
    int i = 0;
    while (cin >> *(a + i)) 
    {
        i += 1;
    }
    cout << endl;
    cout << *(a + i - 1) << " ";
    for (int j = 0; j < i - 1; j++)
    {
        cout << *(a + j) << " ";
    }
}