#include <iostream>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long result = 0, i = 1;
    while(i < n) {
        result++;
        i *= 2;
    }
    cout<<result;
    return 0;
}