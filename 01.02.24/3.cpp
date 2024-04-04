#include <iostream>
#include <algorithm>
using namespace std;

int summa (int a)
{
    if (a >= 0 and a < 10) 
    {
        return a;
    }
    else
    {
        return (a%10) + summa(a/10);
    }
}

int main()
{
    int a;
    cin >> a;
    cout << summa(a);
}