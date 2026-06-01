#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int &i : a) cin>>i;
    for(int &i : b) cin>>i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a == b) cout<<"YES";
    else cout<<"NO";
    return 0;
}