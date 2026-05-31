//Ghep hcn
#include <iostream>
using namespace std;
int a, b, c, d;
int main() {
    cin>>a>>b>>c>>d;
    if(a == c || a == d || b == c || b == d) cout<<"YES";
    else cout<<"NO";
}