//*Author : Franklin*
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const int N = 2e5;
#define deb(x) cout << #x << "=" << x << "\n"
#define debug(a) for(auto &x:a) cout << x << " "
#define debugg(p) for(auto &x:p) cout << "(" << x.first << "," << x.second << ")" << "\n"

int getMSB(long long x) {
    return 1+log2(x);
}

long long calc(long long a,long long b,int msba,int msbb) {
    long long x = (a << msbb)+b;
    long long y = (b << msba)+a;
    return abs(x-y);
}

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n,0);
    vector<long long> adj[32];
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        adj[getMSB(x)].push_back(x);
    }
    for(auto& x:adj) sort(x.begin(),x.end());

    long long ans = -1;
    for(int i = 1; i < 32; i++) {
        for(int j = 1; j < 32; j++) {
            if(!adj[i].empty() && !adj[j].empty()) {
                ans = max(ans,calc(adj[i][0],adj[j][adj[j].size()-1],i,j));
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
