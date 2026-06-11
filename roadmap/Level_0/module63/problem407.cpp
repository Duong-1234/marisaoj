#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    int value = 1;
    int a[n + 1][m + 1];
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;
    while (top <= bottom && left <= right) {
        for(int j = left ; j <= right ; j++)
            a[top][j] = value++;
        top++;
        for(int j = top ; j <= bottom ; j++)
            a[j][right] = value++;
        right--;
        if(top <= bottom) {
            for(int j = right ; j >= left ; j--)
                a[bottom][j] = value++;
            bottom--;
        }
        if(right >= left) {
            for(int j = bottom ; j >= top ; j--)
                a[j][left] = value++;
            left++;
        }
    }
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}