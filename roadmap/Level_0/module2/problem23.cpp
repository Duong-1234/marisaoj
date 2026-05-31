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
    cout<<*max_element(a.begin(),a.end())<<" "<<*min_element(a.begin(),a.end());
    return 0;
}