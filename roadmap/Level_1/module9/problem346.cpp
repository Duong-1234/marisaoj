#include <iostream>
using namespace std;
#define int long long
int n, k;
int x[21];
int a[21];
void Try(int i) {
    for(int j : {0,1}) {
        x[i] = j;
        if(i == n) {
            int tmp_total = 0;
            for(int k = 1 ; k <= n ; k++) 
                tmp_total += (x[k]?a[k]:0);
            if(tmp_total == k) {
                cout<<"YES";
                exit(0);
            }
        }else Try(i + 1);
    }
}
signed main() {
    cin>>n>>k;
    for(int i = 1 ; i <= n ; i++)
        cin>>a[i];
    Try(1);
    cout<<"NO";
    return 0;
}