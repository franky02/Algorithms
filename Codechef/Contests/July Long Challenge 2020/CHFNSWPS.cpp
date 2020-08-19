#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;
#define deb(x) cout << #x << "=" << x << "\n"
#define DEBUG(a) for(auto &x:a) cout << x << " "
#define DEBUGMP(mp) for(auto& x:mp) cout << x.first << "-" << x.second << "\n"

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int,int> mp;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            mp[b[i]]++;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int flag = 1;
        int mn = min(a[0], b[0]);
        for (auto &x:mp) {
            if (x.second & 1) {
                flag = 0;
                cout << -1 << "\n";
                break;
            }
        }
        if(flag) {
            vector<int> ans, v1, v2, vc1, vc2;
            set_symmetric_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(ans));
            for (int i = 0; i < ans.size()/2; i++) {
                v1.push_back(ans[i]);
            }
            for (int i = ans.size()/2; i < ans.size(); i++) {
                v2.push_back(ans[i]);
            }
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end(),greater<int>());
            long long cost = 0;
            for (int i = 0; i < v1.size(); i++) {
                cost += min(2*mn, min(v1[i],v2[i]));
            }
            cout << cost/2 << "\n";
        }

    }
    return 0;
}

