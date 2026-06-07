#include <iostream>
using namespace std;
int main() {
    string s;
    int cnt = 0;
    cin>>s;
    for(int i = 0 ; i < s.length() ; i++) {
        int l = i, r = i;
        while (l >= 0 && r < s.length()) {
            if(s[l] != s[r]) break;
            l--;r++;
            cnt++;
        }
        l = i, r = i + 1;
        while (l >= 0 && r < s.length()) {
            if(s[l] != s[r]) break;
            l--;r++;
            cnt++;
        }
        
    }
    cout<<cnt;
    return 0;
}