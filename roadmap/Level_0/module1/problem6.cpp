#include <iostream>
using namespace std;
int a, b, c;
int main() {
    cin>>a>>b>>c;
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > c) swap(a, c);
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    cout<<a<<" "<<b<<" "<<c;
}