#include <iostream>
using namespace std;
int main() {
    string s, t;int cnt = 0;
    getline(cin, s);
    getline(cin, t);
    for(int i = 0 ; i <= s.length() - t.length(); i++) {
        int ok = 1;
        if(s[i] == t[0]) {
            for(int j = 0 ; j < t.length()  ; j++) {
                if(s[j + i] != t[j]) {
                    ok = 0;
                    break;
                }
            }
        } else ok = 0;
        if(ok) cnt++;
    }
    cout<<cnt;
    return 0;
}