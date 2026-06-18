#include <iostream>
using namespace std;
#define int long long
signed main() {
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int result = a[0],maxx = a[0];
    for(int i = 1 ; i < n ; i++) {
        cin>>a[i];
        maxx = max(a[i],maxx + a[i]);
        result = max(result,maxx);
    }
    cout<<result;
    return 0;
}