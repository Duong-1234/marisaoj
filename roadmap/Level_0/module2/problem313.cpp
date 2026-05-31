#include <iostream>
#include <bitset>
using namespace std;
int main() {
    bitset<32> a;
    cin>>a;
    cout<<a.to_ulong();
}