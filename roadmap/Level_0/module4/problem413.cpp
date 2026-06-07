#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string str;
    vector<string> result;
    while (ss>>str) {  
        str[0] = toupper(str[0]);
        for(int i = 1 ; i < str.length() ; i++) 
            str[i] = tolower(str[i]);
        //cout<<str<<" ";
        result.push_back(str);
    }
    for(int i = 0 ; i < result.size() - 1 ; i++)
        cout<<result[i]<<" ";
    cout<<result[result.size()-1];
    return 0;
}