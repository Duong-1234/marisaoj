#include <iostream>
using namespace std;
int main() {
    long long d;
    long long h = 0;
    long long m = 0;
    long long s = 0;
    cin>>d;
    h = d/3600;d = d - (3600*h);
    m = d/60;d = d - (60*m);
    s = d;
    cout<<h<<" "<<m<<" "<<s; 
}