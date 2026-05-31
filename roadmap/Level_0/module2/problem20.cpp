#include <iostream>
using namespace std;
int main() {
    long long f0 = 0, f1 = 1,fn = f0 + f1, n;
    cin>>n;
    if(n == 0) {
        cout<<f0;
        return 0;
    }else if(n == 1) {
        cout<<f1;
        return 0;
    }
    for(int i = 2 ; i <= n; i++) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    cout<<fn;
}