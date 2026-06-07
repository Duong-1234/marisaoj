#include <iostream>
using namespace std;
int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    static int cnt = 0;
    static char value = s1[0];
    for(int i = 0 ; i < s1.length() ; i++) {
        if(s1[i] == value) cnt++;
        else {
            cout<<cnt<<value;
            cnt = 1;
            value = s1[i];
        }
    }
    if(cnt) 
        cout<<cnt<<value;
    cout<<'\n';
    for(int i = 0 ; i < s2.length() ; i++) {
        static int n = 0;
        if(isdigit(s2[i])) {
            n = n * 10 + (s2[i] - '0');
        } else {
            string res(n,char(s2[i]));
            cout<<res;
            n = 0;
        }
    }
    return 0;
}