#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>
using namespace std;

int a[100][100];

void snake(int n, int m)
{
    int cnt = 1;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++){
                a[i][j] = cnt;
                cnt++;
            }
        }
        else {
            for (int j = m - 1; j >= 0; j--){
                a[i][j] = cnt;
                cnt++;
            }
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    snake(n, m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}