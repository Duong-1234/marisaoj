#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    while (cin>>n) {
        if(n == 0) return 0;
        cout<<1ll * pow(n,5)<<"\n";
    }
    return 0;
}