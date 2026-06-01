#include <iostream>
using namespace std;
int main() {
    int n, q;
    cin>>n>>q;
    int a[n + 1];
    for(int i = 1 ; i <= n ; i++) 
        cin>>a[i];
    struct xy {
        int x;
        int y;
    } Q[q + 1];
    for (int i = 1; i <= q ; i++) 
        cin>>Q[i].x>>Q[i].y;
    for (int i = q; i >= 1 ; i--)  
        swap(a[Q[i].x],a[Q[i].y]);
    for(int i = 1 ; i <= n ; i++) 
        cout<<a[i]<<" ";
    return 0;
}