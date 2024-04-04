#include <iostream>
#include <cstdio>
#include <climits>
#include <string>
using namespace std;

int main()
{
    int a;
    int cnt = 0;
    cin >> a;
    for (int i = 0; i <= 31; i++)
    {
        if ((a & (1 << i)) > 0) 
        {
            cnt += 1;
        }
    }
    cout << cnt << endl;

    unsigned int b;
    cin >> b;
    cout << ~b;
}