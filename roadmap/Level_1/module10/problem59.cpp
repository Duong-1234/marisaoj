#include <iostream>
using namespace std;
#define int long long
signed main() {
    int n, q;
    cin>>n>>q;
    int a[n + 1],pref[n + 1] = {};
    cin>>a[1];
    pref[1] = a[1];
    for(int i = 2 ; i <= n ; i++) {
        cin>>a[i];
        pref[i] = pref[i - 1] + a[i];
    } 
    while (q--) {
        int l, r;
        cin>>l>>r;
        cout<<pref[r] - pref[l - 1]<<"\n";
    }
    return 0;
}