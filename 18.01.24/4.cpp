#include <iostream>
#include <cstdio>
#include <climits>
#include <string>
using namespace std;

int mystrlen(char* str)
{
    int i = 0;
    int k = 0;
    while(str[i] != 0)
    {
        k += 1;
        i += 1;
    }
    return k;
}
int main()
{
    char str1[30];
    cin >> str1;
    int l = mystrlen(str1);
    cout << l;

    return 0;
}
