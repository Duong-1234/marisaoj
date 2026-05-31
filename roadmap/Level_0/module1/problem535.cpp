//calculator
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char type;
    double a, b;
    cin>>a>>type>>b;
    cout<<fixed<<setprecision(3);
    if(type == '+') cout<<a+b;
    else if(type == '-') cout<<a-b;
    else if(type == '*') cout<<a*b;
    else if(type == '/') {
        if(b != 0) cout<<a/b;
        else cout<<"ze";
    }
}