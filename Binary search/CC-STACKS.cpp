#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;
#define deb(x) cout << #x << "=" << x << "\n"
#define DEBUG(a) for(auto x:a) cout << x << " "

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> v;
        for(int i = 0; i < n; i++) {
            auto it = upper_bound(v.begin(),v.end(),a[i]);
            if(it != v.end()) v[it-v.begin()] = a[i];
            else v.push_back(a[i]);
        }
        cout << v.size() << " ";
        DEBUG(v);
        cout << "\n";
    }


    return 0;
}

