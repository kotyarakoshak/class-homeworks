#include <iostream>
#include <cstdio>
#include <climits>
#include <string>

using namespace std;

int main()
{
    // ex.6
    string s = "abracadabra";
    string ss = "";
    string sss = ss + s[4] + s[5] + s[6];
    cout << sss << endl;
    cout << s.substr(1, 3) << endl;
    cout << s.substr(1, 4) << endl;
    cout << s.length() << endl;

    return 0;
}