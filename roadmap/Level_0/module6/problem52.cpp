#include <iostream>
#include <algorithm>
using namespace std;
#define int long long
signed main() {
    int a, b;
    cin>>a>>b;
    cout<<__gcd(a,b)<<" "<<(a * b)/__gcd(a,b);
    return 0;
}