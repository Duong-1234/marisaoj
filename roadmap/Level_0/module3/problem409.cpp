#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++) 
        cin>>a[i];
    int result = 0;
    for(int i = 0 ; i < n ; i++) {
        int ok = 1;
        for(int j = i + 1 ; j < n ; j++) 
            if(a[i] <= a[j]) {ok = 0;break;}
        if(ok&&i!=n-1) result++;
    }
    cout<<result;
    return 0;
}