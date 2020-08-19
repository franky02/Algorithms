#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;
#define DEBUG(a) for(auto x:a) cout << x << " "
#define deb(x) cout << #x << "=" << x << endl

bool check(vector<int> a,int k,int n,int c) {
    int cnt = 1; //count of cows;
    int prev_cow = a.front();
    //deb(prev_cow);
    for(int i = 1; i < a.size(); i++) {
        int curr_cow = a[i];
        //deb(curr_cow);
        if(curr_cow-prev_cow >= k) {
            cnt += 1;
            prev_cow = curr_cow;
        }
    }
    return cnt >= c;
}

int solve(vector<int> a,int n,int c) {
    int L = 0;
    int R = a.back()-a.front();
    int ans = INT_MIN;
    while(L <= R) {
        int mid = (L+R) >> 1;
        if(check(a,mid,n,c)) {
            ans = max(ans,mid);
            L = mid+1;
        }else {
            R = mid-1;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n,c;
        cin >> n >> c;
        vector<int> a;
        while(n--) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        //DEBUG(a);
        cout << solve(a,n,c) << "\n";
    }
    return 0;
}

