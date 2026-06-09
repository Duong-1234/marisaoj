#include <iostream>
using namespace std;
int main() {
    int n, m, x, y;
    cin>>n>>m>>x>>y;
    int a[n][m], b[x][y];
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
            cin>>a[i][j];
    for(int i = 0 ; i < x ; i++)
        for(int j = 0 ; j < y ; j++)
            cin>>b[i][j];         
    bool ok = 0;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++) {
            if(a[i][j] == b[0][0]) {
                ok = 1;
                for(int _i = i ; _i < x + i && _i < n; _i++) {
                    for(int _j = j ; _j < y + j && _j < m; _j++)
                        if(a[_i][_j] != b[_i - i][_j - j]) {
                            ok = 0;
                            break;
                        } 
                }
            }
            if(ok) {
                cout<<"YES";
                return 0;
            }
        }
    if(ok) {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}