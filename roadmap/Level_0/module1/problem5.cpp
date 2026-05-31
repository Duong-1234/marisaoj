//max min
#include <iostream>
#include <algorithm>
using namespace std;
int a, b, c;
int main() {
    cin>>a>>b>>c;
    cout<<min({a,b,c})<<" "<<max({a,b,c});
}