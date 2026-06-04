#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    for (char &i : s)
        i = tolower(i);
    cout<<s;
    return 0;
}