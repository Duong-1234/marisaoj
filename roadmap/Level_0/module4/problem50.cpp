#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int cnt[int('z' - 'a' + 1)] = {};
    for(int i : s) if('a' <= i && i <= 'z') cnt[int(i - 'a')]++;
    for(int i = 0 ; i <= 'z' - 'a' ; i++)
        cout<<cnt[i]<<" ";
    return 0;
}