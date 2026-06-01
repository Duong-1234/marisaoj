#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &i : a)
        cin>>i;
    int __newSz = unique(a.begin(),a.end()) - a.begin();
    for(int i = 0 ; i <  __newSz ; i++) cout<<a[i]<<" ";
    return 0;
}