#include <iostream>
#include <unordered_map>
using namespace std;
string s;
int pref[100'005];
int main() {
    cin>>s;
    int len = s.length();
    s = ' ' + s;
    pref[0] = 0;
    for(int i = 1 ; i <= len ; i++) 
        pref[i] = pref[i - 1] + ((s[i] == '0')?-1:1);
    unordered_map<int,int> mp;
    int result = 0;
    for(int i = 1 ; i <= len ; i++) {
        result += mp[pref[i]];
        mp[pref[i - 1]]++;
    }
    cout<<result;
    return 0;
}