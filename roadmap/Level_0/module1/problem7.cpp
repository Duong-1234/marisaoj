#include <iostream>
using namespace std;
int a, b, c;
int main() {
    cin>>a>>b>>c;
    if(a == b) cout<<c;
    else if(a == c) cout<<b;
    else if(b == c) cout<<a;
    return 0;
}