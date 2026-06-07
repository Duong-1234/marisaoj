#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string str = "";
    long long result = 0;
    while (ss>>str) {
        long long num = 0;
        for(char i : str) {
            if(isdigit(i)) {
                num  = num * 10 + (i - '0');
            }
        } 
        result += num;
        num = 0;
    }
    
    cout<<result;
    return 0;
}