#include <iostream>
using namespace std;
int main() {
    string s;
    int k;
    getline(cin, s);
    //cin.ignore();
    cin>>k;
    for(int c : s) {
        if('a' <= c && c <= 'z') {
            int temp_k = k;
            while (temp_k--) {
                c++;
                if(c > 'z') c = 'a';
            }
            cout<<char(c);
        } else
            cout<<char(c);
    }
    return 0;
}