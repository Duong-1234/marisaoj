#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a; 
    vector<int> d;
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin>>x;
        if(x < 0) a.push_back(x);
        else d.push_back(x);
    } 
    for(int i = 0 ; i < max(a.size(),d.size()) ; i++) {
        if(i < a.size() && i < d.size()) cout<<a[i]<<" "<<d[i]<<" ";
        else if(a.size() > i) cout<<a[i]<<" ";
        else if(d.size() > i) cout<<d[i]<<" ";
    }
    return 0;
}