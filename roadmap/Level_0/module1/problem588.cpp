#include <iostream>
using namespace std;
int main() {
    int x, y, result = 0;
    cin>>x>>y;
    while (y--) { 
        if(x < 7) result++;
        x++;
        if(x == 9) x = 2;
    }
    cout<<result;
    return 0;
}