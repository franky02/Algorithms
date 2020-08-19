//*Author : Franklin*
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const int N = 2e5;
#define deb(x) cout << #x << "=" << x << "\n"
#define debug(a) for(auto &x:a) cout << x << " "
#define debugg(p) for(auto &x:p) cout << "(" << x.first << "," << x.second << ")" << "\n"
//Equation of any line : x + y = a

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int q;
        cin >> q;
        while(q--) {
            int x,y;
            cin >> x >> y;
            auto ub = upper_bound(a.begin(),a.end(),x+y);
            auto lb = lower_bound(a.begin(),a.end(),x+y);
            cout << ((ub-a.begin() == lb-a.begin())?(ub-a.begin()):-1) << "\n";
        }
    }
    return 0;
}
