#include <iostream>
using namespace std;
int main() {
    char c;cin>>c;
    if('a' <= c && c <= 'z') cout<<(char)((int)c - 32);
    else cout<<(char)((int)c + 32);
    return 0;
}