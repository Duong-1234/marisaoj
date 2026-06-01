#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, q;
    cin>>n>>q;
    vector<int> a(n + 1);
    for(int i = 1 ; i <= n ; i++)
        cin>>a[i];
    while (q--) {
        int index, value;
        cin>>index>>value;
        a.insert(a.begin() + index, value);
        for(int i = 1 ; i < a.size() ; i++)
            cout<<a[i]<<" ";
        cout<<'\n';
    }
    return 0;
}