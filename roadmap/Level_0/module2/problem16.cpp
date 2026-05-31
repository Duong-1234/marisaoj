#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i = n ; i >= 1 ; i--) {
        string s(i,'*');
        cout<<s<<'\n';
    }
    return 0;
}