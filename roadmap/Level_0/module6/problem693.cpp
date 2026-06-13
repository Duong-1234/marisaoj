#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    unordered_set<string> s;
    s.reserve(n);
    for(int i = 0 ; i < n ; i++) {
        string st;cin>>st;
        s.insert(st);
    }
    int q;
    cin>>q;
    string result = "";
    while (q--) {
        string S;
        cin>>S;
        result+=(s.count(S)?"YES\n":"NO\n");
    }
    cout<<result;
    return 0;
}