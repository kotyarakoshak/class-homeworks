#include <iostream>

using namespace std;

void IsDigit(char c)
{
    if(c >= '0' && c <= '9')
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    char c;
    cin >> c;
    IsDigit(c);
    return 0;
}