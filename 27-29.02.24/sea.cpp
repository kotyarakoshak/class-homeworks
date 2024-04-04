#include <iostream>
#include <istream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stdexcept>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    map<string, string> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        m[b] = a;
        m[a] = b;
    }
    
    string syn;
    cin >> syn;
    for (map<string, string>::iterator it = m.begin(); it != m.end(); it++)
    {
        pair<string, string> x;
        x = *it;
        string s = x.first;
        string y = x.second;
        if (y == syn) {cout << m[y];}
    }
}