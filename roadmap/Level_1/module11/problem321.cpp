#include<iostream>
#include<algorithm>
using namespace std;
long long n, a[100005], b[100005], nexta[100005], nextb[100005], prea, preb, resulta, resultb;
int main() {
    cin>>n;
    for(int i = 0 ; i < n ; i++)
        cin>>a[i]>>b[i];
    sort(a, a + n);
    sort(b, b + n);
    for(int i = n - 2 ; i >= 0 ; i--) {
        nexta[i] = nexta[i + 1] + (a[i + 1] - a[i]) * (n - i - 1);
        nextb[i] = nextb[i + 1] + (b[i + 1] - b[i]) * (n - i - 1);
    }
    prea = preb = 0;
    resulta = nexta[0], resultb = nextb[0];
    for(int i = 1 ; i < n ; i++) {
        prea += (a[i] - a[i - 1]) * i, preb += (b[i] - b[i - 1]) * i;
        resulta = min(resulta, prea + nexta[i]), resultb = min(resultb, preb + nextb[i]);
    }
    resulta = min(resulta, prea), resultb = min(resultb, preb);
    cout<<resulta + resultb;
    return 0;
}