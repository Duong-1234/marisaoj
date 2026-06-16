#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
#define int long long
struct bottle{
    int a;
    int b;
};
signed main() {
    int n;
    cin>>n;
    vector<bottle> B(n);
    for(int i = 0 ; i < n ; i++) {
        cin>>B[i].a>>B[i].b;
    } 
    vector<int> prem(n);
    iota(prem.begin(), prem.end(), 0);
    int result = 9223372036854775807ll;
    do{
        int t1 = 0,t2 = t1;
        for(int i : prem) {
            t1 += B[i].a;
            t2 = max(t1,t2) + B[i].b;
        }
        result = min(result,t2);
    } while(next_permutation(prem.begin(),prem.end()));
    cout<<result;
    return 0;
}