#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin>>n;
    double result = 0;
    for(int i = 0 ; i < n ; i++) {
        int x;cin>>x;
        result+=x;
    }
    cout<<fixed<<setprecision(3)<<result/n * 1.0;
    return 0;
}