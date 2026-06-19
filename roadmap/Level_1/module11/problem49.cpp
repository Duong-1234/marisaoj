#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int pos = 0;
    while(s[pos]=='0') pos++;
    swap(s[0],s[pos]);
    cout<<s;
    return 0;
}