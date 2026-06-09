#include <iostream>
using namespace std;
int main() {
    int n, m, x, y;
    cin>>n>>m>>x>>y;
    int a[n + 1][m + 1];
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin>>a[i][j];
    int result = a[x][y];
    int _x = x - 1,_y = y - 1;
    while (1 <= _x && 1 <= _y) {
        result += a[_x][_y];
        _x--;
        _y--;
    }
    _x = x + 1,_y = y + 1;
    while (n >= _x && m >= _y) {
        result += a[_x][_y];
        _x++;
        _y++;
    }
    _x = x + 1,_y = y - 1;
    while (n >= _x && 1 <= _y) {
        result += a[_x][_y];
        _x++;
        _y--;
    }
    _x = x - 1,_y = y + 1;
    while (1 <= _x && m >= _y) {
        result += a[_x][_y];
        _x--;
        _y++;
    }
    cout<<result;
    return 0;
}