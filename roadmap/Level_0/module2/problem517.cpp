#include <iostream>
using namespace std;
int main() {
    long long a, b;
    cin>>a>>b;
    long long total = a + b;
    long long totalrev = 0;
    while(total) {
        totalrev = totalrev * 10 + total%10;
        total/=10;
    }
    cout<<totalrev;
    return 0;
}