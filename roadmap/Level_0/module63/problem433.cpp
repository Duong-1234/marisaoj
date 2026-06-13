#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    vector<string> s(n);
    for(string &i : s) 
        cin>>i;
    string u;
    cin>>u;
    int len = u.length();
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            if(u[0] != s[i][j]) continue;
            string ss = "";
            int left = j,right = j;
            while (left) {
                ss+=s[i][left];
                if(ss == u) {
                    cout<<"YES";
                    return 0;
                }
                left--;
            }
            ss = "";
            while (right < m) {
                ss+=s[i][right];
                if(right - j > len) break;
                if(ss == u) {
                    cout<<"YES";
                    return 0;
                }
                right++;
            }
            ss = "";
            int down = i;
            while (down < n) {
                ss += s[down][j];
                if(down - i > len) break; 
                if(ss == u) {
                    cout<<"YES";
                    return 0;
                }
                down++;
            }
        }
    }
    cout<<"NO";
    return 0;
}