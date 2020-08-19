//*Author : Franklin*
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const int N = 2e5;
#define deb(x) cout << #x << "=" << x << "\n"
#define debug(a) for(auto &x:a) cout << x << " "
#define debugg(p) for(auto &x:p) cout << "(" << x.first << "," << x.second << ")" << "\n"

class Solution{
public:
    void solve() {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int fre[N] = {0};
        for(int i = 0; i < s.size(); i++) {
            fre[s[i]-'a']++;
        }
        int flag = 1;
        for(int i = 0; i < s.size(); i++) {
            if(fre[s[i]-'a']%2 == 1) {
                flag = 0;
                break;
            }
        }
        cout << ((flag)?"YES":"NO") << "\n";
    }
};

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        Solution s;
        s.solve();
    }

    return 0;

}
