//*Author : Franklin*
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const int N = 2e5;
#define deb(x) cout << #x << "=" << x << "\n"
#define debug(a) for(auto &x:a) cout << x << " "
#define debugg(p) for(auto &x:p) cout << "(" << x.first << "," << x.second << ")" << "\n"

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n,m,x,y;
        cin >> n >> m >> x >> y;
        if(n == 1 && m == 1) {
            cout << x << "\n";
            continue;
        }
        int a,b;
        if(x >= y) a = 0,b = y;
        else if(y >= 2*x) a = x,b = x;
        else a = y-x,b = x;
        cout << n*m/2*a + (n*m+1)/2*b << "\n";
    }
    return 0;
}
