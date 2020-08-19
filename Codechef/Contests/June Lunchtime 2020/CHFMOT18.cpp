#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int s,n;
        cin >> s >> n;
        int res = 0;
        if(s%2 == 1) {
            res += 1;
            s -= 1;
        }
        while(n) {
            res += s/n;
            s %= n;
            n = s;
        }
        cout << res << "\n";
    }



    return 0;
}

