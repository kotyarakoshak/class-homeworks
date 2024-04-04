#include <iostream>
#include <cstdio>
#include <climits>
#include <string>

using namespace std;

int main()
{ 
    int x;
    cin >> x;
    if (x != 0) 
    {
        cout << 100 / x << endl;
    } 
    else 
    {
        cout << "Cannot use 0" << endl;
    }
    
    return 0;
}
