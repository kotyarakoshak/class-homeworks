#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++) 
    {
        cout << "\t" << i;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
        {
            cout << i << "\t";
            for(int j = 1; j <= m; j++) {cout << i * j << "\t";}
            cout << endl;
        }
    return 0;
}