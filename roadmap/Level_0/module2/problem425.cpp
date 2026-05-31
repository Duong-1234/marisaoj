#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int result = 0;
    for(int i = 1 ; i <= n ; i++)
        for(int j = i + 1 ; j <= n ; j++)
            for(int k = j + 1 ; k <= n ; k++)
                for(int h = k + 1 ; h <= n ; h++)
                    if(i + j + k + h == n) 
                        result++;
    cout<<result;
    return 0;
}