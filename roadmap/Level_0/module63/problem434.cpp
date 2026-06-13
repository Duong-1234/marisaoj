#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin>>a[i][j];
    for (int d = 0; d <= n + m - 2; d++) {
        if (d % 2 == 0) {
            int i = min(d, n - 1);
            int j = d - i;
            while (i >= 0 && j < m) {
                cout<<a[i][j]<<" ";
                i--;
                j++;
            }
        } else {
            int j = min(d, m - 1);
            int i = d - j;
            while (j >= 0 && i < n) {
                cout<<a[i][j]<<" ";
                i++;
                j--;
            }
        }
    }
    return 0;
}