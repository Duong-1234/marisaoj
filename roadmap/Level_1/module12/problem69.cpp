#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, q;
    cin>>n>>q;
    vector<int> a(n + 2, 0);
    while(q--) {
        int l, r;
        cin>>l>>r;
        //for(int i = l ; i <= r ; i++) a[i]++;
        a[l]++;
        a[r + 1]--;
    }
    for(int i = 1 ; i <= n ; i++) {
        a[i] = a[i - 1] + a[i];
        cout<<a[i]<<' ';
    }
    return 0;
}