#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    int c0 = 0, c1 = 0,c2 = 0;
    for(int i = 0 ; i < n ; i++) {
        cin>>a[i];
        if(a[i]%3 == 0) c0++; 
        else if(a[i]%3 == 1) c1++; 
        else if(a[i]%3 == 2) c2++; 
    }
    cout<<(long long)(c0 * (c0 - 1)/2 + c1*c2);
    return 0;
}