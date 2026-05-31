#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    do {
        if(n%2==0 && n != 0) 
        cout<<n<<" ";
    } while(n--);
    return 0;
}