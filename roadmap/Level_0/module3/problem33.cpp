#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int result = 0, tmp_len = 0;
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin>>x;
        if(x > 0) tmp_len++;
        else {
            result = max(result, tmp_len);
            tmp_len = 0;
        }
    }
    cout<<max(result, tmp_len);
    return 0;
}