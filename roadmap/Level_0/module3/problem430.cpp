#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int i = 1;
    while(i < n && a[i] > a[i - 1]) i++;
    while(i < n && a[i] < a[i - 1]) i++;
    cout<<(i == n ? "YES" : "NO");
    return 0;
}