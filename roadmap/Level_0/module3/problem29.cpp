#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    map<int, int> mp;
    for(int &i : a) {
        cin>>i;
        mp[i]++;
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    int result = 0, _count = 0;
    for(int i : a) 
        if(mp[i] > _count) {
            _count = mp[i];
            result = i;
        } else if(mp[i] == _count) 
            result = max(result, i);
    cout<<result;
    return 0;
}