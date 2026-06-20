#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, q;
    cin>>n>>m>>q;
    vector<vector<int>> a(n + 5,vector<int>(m + 5, 0));
    vector<vector<int>> diff(n + 5,vector<int>(m + 5, 0));
    while (q--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        diff[a][b]++;
        diff[a][d + 1]--;
        diff[c + 1][b]--;
        diff[c + 1][d + 1]++;
    }
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            a[i][j] = a[i - 1][j] + a[i][j - 1] + diff[i][j] - a[i - 1][j - 1];
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= m ; j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}