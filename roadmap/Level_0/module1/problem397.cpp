//Phuong trinh nghiem nguyen
#include <iostream>
using namespace std;
int a, b;
int main() {
    cin>>a>>b;
    if(a == 0 && b == 0) cout<<"INFINITE SOLUTIONS";
    else if(a == 0) cout<<"NO SOLUTION";
    else if(b%a) cout<<"NO SOLUTION";
    else cout<<-b/a;
    return 0;
}