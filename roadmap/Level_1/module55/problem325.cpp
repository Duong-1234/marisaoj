#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int x[10];
int main() {
    cin>>n;
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    do {
        for(int i : a)
            cout<<i<<" ";
        cout<<'\n';
    } while(next_permutation(a.begin(),a.end()));
    return 0;
}