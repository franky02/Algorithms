#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;

bool cmp(pair<long long,long long>& p1,pair<long long,long long>& p2) {
    if(p1.first < p2.first) {
        return false;
    }else if(p1.first == p2.first) {
        if(p1.second > p2.second) {
            return false;
        }
    }
    return true;
}

//1 ≤ K ≤ 30 (max 30 set-bits)
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--) {
        long long n,k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<pair<long long,long long>> v(31);
        for(long long i = 0; i <= 30; i++) {
            long long cnt = 0;
            for(long long j = 0; j < n; j++) {
                if(a[j] &  (long long)pow((long long)2,(long long)i)) {
                    cnt += 1;
                }
            }
            v[i].first = cnt * (long long)pow((long long)2,(long long)i);
            v[i].second = i;
        }
        sort(v.begin(),v.end(),cmp);
        long long ans = 0;
        for(int i = 0; i < k; i++) {
            ans += (long long)pow((long long)2,(long long)v[i].second);
        }
        cout << ans << "\n";
    }
    return 0;
}

