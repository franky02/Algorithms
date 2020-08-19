//*Author : Franklin*
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const int N = 2e5;
#define deb(x) cout << #x << "=" << x << "\n"
#define debug(a) for(auto &x:a) cout << x << " "
#define debugg(p) for(auto &x:p) cout << "(" << x.first << "," << x.second << ")" << "\n"

vector<int> adj[N];
vector<int> p = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
long long a[N];

void dfs(int u,int par=0,int dep=1) {
    for(int x:p) {
        if(dep%(x/2)==0) {
            a[u] *= x;
        }
    }
    for(int x:adj[u]) {
        if(x != par) dfs(x,u,dep+1);
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i=1; i<=n; i++) adj[i].clear();
        for(int i=1; i<=n-1; i++) {
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=1; i<=n; i++) a[i] = 1;
        dfs(1);
        for(int i=1; i<=n; i++) cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}
