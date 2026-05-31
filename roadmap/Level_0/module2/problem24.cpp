#include <iostream>
using namespace std;
long long powmod(long long a,long long b,long long c) {
    long long result = 1;
    while (b) {
        if(b%2) result = (result * a)%c;
        a = (a * a)%c;
        b>>=1;
    }    
    return result;
}
int main() {
    long long a, b, c;
    cin>>a>>b>>c;
    cout<<powmod(a,b,c);
    return 0;
}