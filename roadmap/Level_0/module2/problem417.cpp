#include <iostream>
using namespace std;
int main() {
    int a, b, k;
    cin>>a>>b>>k;
    int r = a%b;
    for(int i = 1 ; i < k ; i++) 
        r = (r*10)%b;
    cout<<(r*10)/b;
    return 0;
}