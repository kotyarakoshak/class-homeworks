#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>
using namespace std;

int a[100][100];

void spiral(int n, int m)
{
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= m; j++)
        {
            a[i][j] = 0;
        }
    }

    int x = 0;
    int y = 0;
    int dir[4][2] = {{0,1}, {1,0},{0,-1},{-1,0}};
    int cur = 0;
    int cnt = 1;
    int ras = 0;
    while (cnt <= n*m && ras < 4)
    {
        a[x][y] = cnt;
        int nx = x + dir[cur][0];
        int ny = y + dir[cur][1];
        if (nx < n && nx >= 0 && ny < m && ny >= 0 && a[nx][ny] == 0){
            ras = 0;
            x = nx;
            y = ny;
            cnt++;
        }
        else {
            cur = (cur + 1) % 4;
            ras ++;
        }
    }

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    spiral(n, m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}