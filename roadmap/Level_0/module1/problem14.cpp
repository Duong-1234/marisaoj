#include <iostream>
using namespace std;
int main() {
    char a, b;
    cin>>a>>b;
    if('a' <= a && a <= 'z') a -= 32;
    if('a' <= b && b <= 'z') b -= 32;
    cout<<(int)b - (int)a - 1;
}