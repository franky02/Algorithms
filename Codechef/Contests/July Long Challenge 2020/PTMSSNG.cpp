#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;
#define deb(x) cout << #x << "=" << x << "\n";
#define DEBUG(a) for(auto &x:a) cout << x << " ";

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        set<long long> sx,sy;
        int ver = 4*n-1;
        for(int i = 0; i < ver; i++) {
            long long x,y;
            cin >> x >> y;
            if(!sx.count(x)) {
                sx.insert(x);
            }else {
                sx.erase(x);
            }
            if(!sy.count(y)) {
                sy.insert(y);
            }else {
                sy.erase(y);
            }
        }
        cout << *sx.begin() << " " << *sy.begin() << "\n";
    }
    return 0;
}

