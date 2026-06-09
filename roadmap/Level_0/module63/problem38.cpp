#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0 ; i < n ; i++) 
        for(int j = 0 ; j < m ; j++)
            cin>>a[i][j];
    for(int j = 0 ; j < m ; j++) 
        for(int i = 1 ; i < n ; i++) {
            a[i][j] += a[i - 1][j];
        }
    for(int j = 0 ; j < m ; j++)
        cout<<a[n - 1][j]<<" ";
     
    return 0;
}