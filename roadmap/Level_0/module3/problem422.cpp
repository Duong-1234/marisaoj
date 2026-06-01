#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n + 1], total = 0;
    for(int i = 1 ; i <= n ; i++) {
        cin>>a[i];
        total += a[i];
    }
    int d = 0;
    int x, y;
    cin>>x>>y;
    if(x > y) swap(x,y);
    for(; x < y ; x++) 
        d += a[x];
    cout<<min(d, total - d);
    return 0;
}