#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int result = 0;
    while(n) {
        n/=5;
        result += n;
    }
    cout<<result;
    return 0;
}