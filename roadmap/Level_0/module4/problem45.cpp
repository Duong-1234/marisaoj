#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    for(char c : s) {
        if(isdigit(c)) c1++;
        else if('a' <= c && c <= 'z') c2++;
        else if('A' <= c && c <= 'Z') c3++;
    }
    if((c1 && c2 && c3) && s.length() >= 8) cout<<"STRONG";
    else cout<<"WEAK";
    return 0;
}