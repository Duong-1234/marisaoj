#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i = 0 ; i < n ; i++)
        cin>>a[i];
    sort(a, a + n);
    int result = 0;
    int l = 0, r = n - 1;
    while (l <= r) {
        if(a[l] + a[r] <= k && l != r) {
            l++;r--;
        } else r--;
        result++;
    }
    cout<<result;
    return 0;
}