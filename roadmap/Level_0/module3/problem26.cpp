#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &i : a) cin>>i;
    vector<int> b = a;
    reverse(b.begin(),b.end());
    if(a == b) cout<<"YES";
    else cout<<"NO";
    return 0;
}