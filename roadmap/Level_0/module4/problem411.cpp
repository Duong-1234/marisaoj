#include <iostream>
using namespace std;
int main() {
    string s;
    int count = 0;
    getline(cin, s);
    for(char i : s)
        if(i == 'u'|| i == 'e' || i == 'o' || i == 'a' || i == 'i'|| i == 'U'|| i == 'E' || i == 'O' || i == 'A' || i == 'I')
            count++;
    cout<<count;
    return 0;
}