#include <iostream>
using namespace std;
long long a, b, c;
int main() {
    cin>>a>>b>>c;
    cout<<(1ll * a * b) % c;
    return 0;
}