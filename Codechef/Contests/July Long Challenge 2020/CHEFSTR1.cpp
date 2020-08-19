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
        int s[n];
        for(int i = 0; i < n; i++) {
            cin >> s[i];
        }
        long long cnt = 0;
        for(int i = 1; i < n; i++) {
            cnt += abs(s[i]-s[i-1])-1;
        }
        cout << cnt << "\n";
    }
    return 0;
}

