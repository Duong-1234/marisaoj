#include <iostream>
#include <vector>
using namespace std;
int main() {
    string s;
    cin>>s;
    vector<long long> num;
    vector<char> c;
    char d = 'n';
    long long n = 0, n2 = 0;
    for(char i : s) {
        if(isdigit(i)) {
            if(d == 'n') n = n * 10 + (i - '0');
            else n2 = n2 * 10 + (i - '0');
        } else {
            if(d != 'n') {
                n = n * n2;
                d = 'n';
            }
            if(i == '+' || i == '-') {
                num.push_back(n);
                c.push_back(i);
                n = 0;
            } else {
                d = i;
                n2 = 0;
            }
        }
    }
    if(d != 'n')
        n *= n2;
    num.push_back(n);
    long long result = num[0];
    for(int i = 1 ; i < num.size() ; i++) {
        if(c[i - 1] == '+') result += num[i];
        else result -= num[i];
    }
    cout<<result;
    return 0;
}