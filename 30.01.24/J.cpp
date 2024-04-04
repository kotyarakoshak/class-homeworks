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
    for (int j = -1; j < i; j) 
    {
        if (j + 2 < i) {
            j += 2;
            cout << *(a + j) << " " << *(a + j - 1) << " ";
        } else {
            if (i % 2 != 0) {
                cout << *(a + j + 1);
            }
            break;
        }

        if (j % 2 == 0)
        {
            //cout << *(a+j) << " " << *(a+j + 1);
        }
        else { cout << " "; }
        if (i % 2 == 1)
        {
            //cout << *(a + i -1);
        }
    }
}