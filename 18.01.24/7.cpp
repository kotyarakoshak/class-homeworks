#include <iostream>
#include <cstdio>
#include <climits>
#include <string>
using namespace std;

int main()
{
    string str1;
    string str2;
    getline(cin, str1);
    getline(cin, str2);
    if (str1 < str2) {cout << "1";}
    else {cout << "2";}
    cout << endl;
    int l1 = str1.length();
    int l2 = str2.length();
    cout << l1 << endl << l2;
    return 0;
}
