#include <iostream>
using namespace std;
#define int long long
signed main() {
    int n, result = 0;
    cin>>n;
    n *= 2;
    for(int i = 2 ; i * i <= n ; i++) 
        if(!(n%i)) {
            if(n/i == i) continue;
            int a = i;
            int b = n/i;
            result += ((b - a + 1)%2 == 0 && (b + a - 1)%2 == 0);
        }
    cout<<result;
    return 0;
}