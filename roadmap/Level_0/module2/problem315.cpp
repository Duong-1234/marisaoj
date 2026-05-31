#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b;
    cin>>a>>b;
    int _gcd = __gcd(a,b);
    cout<<a/_gcd<<" "<<b/_gcd;
    return 0;
}