#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(3));
    for(int i = 0 ; i < n ; i++) {
        int x, y, z;
        cin>>x>>y>>z;
        a[i][0] = x;
        a[i][1] = y;
        a[i][2] = z;
    }
    sort(a.begin(),a.end());
    for(int i = 0 ; i < n ; i++) 
        cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<"\n";
    return 0;
}