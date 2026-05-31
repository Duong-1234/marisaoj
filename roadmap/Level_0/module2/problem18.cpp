#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n < 2) {
        cout<<"NO";
        return 0;
    }
    if(n == 2) {
        cout<<"YES";
        return 0;
    }
    for(int i = 2 ; i < n ; i++) 
        if(!(n%i)) {
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
    return 0;
}   