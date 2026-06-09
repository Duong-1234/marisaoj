#include <iostream>
using namespace std;
int dp[101][101];
int main() {
    int n;
    cin>>n;
    int result = 0;
    while (n--) {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        for(int i = min(x1,x2) ; i <= max(x1,x2) ; i++)
            for(int j = min(y1,y2) ; j <= max(y1,y2) ; j++)
                dp[i][j] = 1;
    }
    for(int i = 0 ; i <= 100 ; i++)
        for(int j = 0 ; j <= 100 ; j++)
            result+=dp[i][j];    
    cout<<result;
    return 0;
}