#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, q;
    cin>>n>>m>>q;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i = 0 ; i < n ; i++) 
        for(int j = 0 ; j < m ; j++)
            cin>>a[i][j];
    while (q--) {
        int type,i,j;
        cin>>type>>i>>j;
        i--;j--;
        if(type == 1){
            swap(a[i],a[j]);
        }else {
            for(int h = 0 ; h < n ; h++)
                swap(a[h][i],a[h][j]);
        }
    }
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++)
          cout<<a[i][j]<<" ";
        cout<<'\n';
    } 
    return 0;
}