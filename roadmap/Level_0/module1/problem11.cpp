//CP
#include <iostream>
#include <cmath>
using namespace std;
long long a;
int main() {
    cin>>a;
    long long __a = sqrt(a);
    if(__a * __a == a) cout<<"YES";
    else cout<<"NO";
    return 0;
}