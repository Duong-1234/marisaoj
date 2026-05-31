#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x;
    int mx = -1;
    int pos;
    for(int i = 1 ; i <= n ; i++) {
        cin >> x;
        if(x > mx) {
            mx = x;
            pos = i;
        }
    }
    cout<<mx<<" "<<pos;
    return 0;
}