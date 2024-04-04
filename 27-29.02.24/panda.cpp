#include <iostream>
#include <istream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <set>
#include <stdexcept>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    set<string> sss;
    string s;
    getline (cin, s);
    stringstream ss(s);
    string x;
    for (;ss >> x;) {sss.insert(x);}
    cout << sss.size();
    //////////////////////////////////////////////////////
}