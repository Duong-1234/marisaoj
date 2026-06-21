#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    int n, q, m;
    cin>>n>>q>>m;
    struct xy {
        int left, right;
    };
    vector<xy> Q(q + 5);
    for(int i = 1 ; i <= q ; i++) 
        cin>>Q[i].left>>Q[i].right;
    vector<int> count(q + 3, 0);
    vector<int> diff(q + 3, 0);
    for(int i = 0 ; i < m ; i++) {
        int x, y;
        cin>>x>>y;
        diff[x]++;
        diff[y + 1]--;
    }
    for(int i = 1 ; i <= q ; i++)
        count[i] = count[i - 1] + diff[i];
    vector<int> a(n + 3);
    vector<int> diff2(n + 3);
    for(int i = 1 ; i <= q ; i++) {
        if(count[i] > 0) {
            int l = Q[i].left;
            int r = Q[i].right;
            diff2[l] += count[i];
            diff2[r + 1] -= count[i];
        }
    }
    int result = 0;
    for(int i = 1 ; i <= n ; i++) {
        result += diff2[i];
        cout<<result<<" ";
    }
    return 0;
}