#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;
#define DEBUG(a) for(auto x:a) cout << x << " "
string st;

//Sliding Window
int f(int k) {
    int cnt[4] = {0};
    for(int i = 0; i < k-1; i++) {
        cnt[st[i]-'0']++;
    }
    for(int i = k-1; i < st.size(); i++) {
        cnt[st[i]-'0']++;
        if(cnt[1] > 0 && cnt[2] > 0 && cnt[3] > 0) {
            return true;
        }
        cnt[st[i-k+1]-'0']--;
    }
    return false;
}

//Binary Search
int solve() {
    int res = INT_MAX;
    int L = 3;
    int R = st.size();
    while(L <= R) {
        int mid = (L+R) >> 1;
        if(f(mid)) {
            res = min(res,mid);
            R = mid-1;
        }else {
            L = mid + 1;
        }
    }
    return (res == INT_MAX)?0:res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        cin >> st;
        cout << solve() << endl;
    }

    return 0;
}

