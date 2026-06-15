#include <iostream>
using namespace std;
int n;
int x[11];
void Try(int i) {
    for(int j : {0,1}) {
        x[i] = j;
        if(i == n) {
            for(int i = 1 ; i <= n ; i++)
                cout<<x[i];
            cout<<'\n';
        }
        else Try(i + 1);
    }
}
int main() {
    cin>>n;
    Try(1);
    return 0;
}