//*Author : Franklin*
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const int N = 2e5;
#define deb(x) cout << #x << "=" << x << "\n"
#define debug(a) for(auto &x:a) cout << x << " "
#define debugg(p) for(auto &x:p) cout << "(" << x.first << "," << x.second << ")" << "\n"

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n,0);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end(),greater<long long>());
        set<long long> s;
        long long cor = 0;
        bool flag = 1;
        for(auto x : a) {
            cor |= x;
            if(s.count(cor)) {
                flag = 0;
                break;
            }
            s.insert(cor);
        }
        cout << ((flag)?"YES":"NO") << "\n";
    }
    return 0;
}
