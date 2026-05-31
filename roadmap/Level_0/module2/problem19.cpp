#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    long long result = 0;
    for(int i = 0 ; i < s.length() ; i++) 
        result += ((s[i]!='-')?(s[i] - '0'):0);
    cout<<result;
    return 0;
}