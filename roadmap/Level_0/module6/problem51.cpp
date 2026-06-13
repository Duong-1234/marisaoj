#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    long long result = 0;
    map<int,int> mp;
    for(int i = 0 ; i < n ; i++) {
        cin>>a[i];
        result += mp[a[i]];
        mp[a[i]]++;
    }
    cout<<result;
    return 0;
}