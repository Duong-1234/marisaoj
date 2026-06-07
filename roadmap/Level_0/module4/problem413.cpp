#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string str;
    while (ss>>str) {  
        str[0] = toupper(str[0]);
        for(int i = 1 ; i < str.length() ; i++) 
            str[i] = tolower(str[i]);
        cout<<str<<" ";
    }
    return 0;
}