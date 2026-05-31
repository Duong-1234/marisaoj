#include <iostream>
using namespace std;
int a, b, c, x, y, z;
int main() {
    cin>>a>>b>>c>>x>>y>>z;
    if(c == z) {
        if(b == y) {
            if(a > b) cout<<2;
            else cout<<1;
        }else if(b > y) cout<<2;
        else cout<<1;
    }else if(c > z) cout<<2;
    else cout<<1;
}