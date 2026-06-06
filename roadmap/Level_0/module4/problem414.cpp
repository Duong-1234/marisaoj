#include <iostream>
using namespace std;
int main() {
    string s;
    long long result = 0;
    cin>>s;
    for(int i : s) 
        result += (i - '0');
    cout<<result;
    return 0;
}