#include <iostream>
using namespace std;
int n;
char x[11];
void Try(int i) {
    for(char c : {'A','B','C'}) {
        if(x[i - 1] == c) continue;  
        x[i] = c;
        if(i == n) {
            for(int i = 1 ; i <= n ; i++)
                cout<<x[i];
            cout<<'\n';
        }else Try(i + 1);
    }
}
int main() {
    cin>>n;
    Try(1);
    return 0;
}