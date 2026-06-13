#include <iostream>
using namespace std;
int main() {
    long long result = 0;
    long long n;
    cin>>n;
    for(long long i = 1 ; i * i <= n ; i++) {
        if(n%i == 0) {
            result += i;
            if(i * i != n) result += n/i;
        }
    }
    cout<<result;
    return 0;
}