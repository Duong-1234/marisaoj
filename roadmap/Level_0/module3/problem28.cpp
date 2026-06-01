#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    for(int &i : a) {
        cin>>i;
        mp[i]++;
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    int result = 0;
    for(int i : a) 
        if(mp[i] > 2) 
            result++;
    cout<<result;
    return 0;
}