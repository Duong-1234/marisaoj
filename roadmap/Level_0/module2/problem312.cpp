#include <iostream>
#include <bitset>
using namespace std;
int main() {
    int n;
    cin>>n;
    bitset<32> a(n);
    int st = 0;
    for(int i = 32 ; i >= 0 ; i--) 
        if(a[i]) {
            st = i;
            break;
        }
    for(;st >= 0 ; st--)
        cout<<a[st];
    return 0;
}