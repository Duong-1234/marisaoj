#include <iostream>
using namespace std;
int main() {
    int x, a, b, c, d;
    cin>>x>>a>>b>>c>>d;
    long long result = 0;
    while(x > 150) {
        result += d;
        x--;
    }
    while(x > 100) {
        result += c;
        x--;
    }
    while(x > 50) {
        result += b;
        x--;
    }
    while (x) {
        result += a;
        x--;
    }
    cout<<result;
}