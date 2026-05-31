#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
        cin>>a[i];
    int mx1 = -1e9;
    int mx2 = -1e9;
    for(int i = 0 ; i < n ; i++) {
        if(a[i] > mx1) {
            mx2 = mx1;
            mx1 = a[i];
        }
        else if(a[i] > mx2) {
            mx2 = a[i];
        }
    }
    cout<<mx2;
    return 0;
}