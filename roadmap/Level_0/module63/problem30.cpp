#include <iostream>
using namespace std;
#define int long long
signed main() {
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++) {
        int num = 1;
        for(int j = 0 ; j <= i ; j++) {
            cout<<num<<" ";
            num = num  * (i - j) / (j + 1);
        }
        cout<<"\n";
    }
    return 0;
}