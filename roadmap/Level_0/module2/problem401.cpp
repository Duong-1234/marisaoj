#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k; 
    int day = n;
    while(n >= k) {
        int cn = n/k;
        day += cn;
        n = cn + (n%k);
    }
    cout<<day;
    return 0;
}