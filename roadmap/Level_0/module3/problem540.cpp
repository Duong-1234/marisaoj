#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    int result = 0;
    for(int i = 0 ; i < n ; i++) 
        cin>>a[i];
    for(int i = 0 ; i < n - 1 ; i++)
        if(result < abs(a[i]- a[i + 1]))
            result = abs(a[i] - a[i + 1]);
    cout<<result;
    return 0;
}