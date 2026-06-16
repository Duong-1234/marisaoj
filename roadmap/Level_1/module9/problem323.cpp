#include <iostream>
using namespace std;
int n, k,a[21], x[21];
void Try(int i) {
    for(int j = 1 ; j <= n ; j++) {
        if(a[j]) {
            if(x[i - 1] > j) continue;
            a[j] = 0;
            x[i] = j;
            if(i == k) {
                for(int c = 1 ; c <= k ; c++)
                cout<<x[c]<<" ";
                cout<<'\n';
            } else Try(i + 1);
            a[j] = 1;
        }
    }
}
int main() {
    cin>>n>>k;
    fill(a, a + 21, 1);
    Try(1);
    return 0;
}