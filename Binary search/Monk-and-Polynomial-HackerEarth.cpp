#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;
#define SQ(x) (x)*(x)

//Global
long long A,B,C,k;

long long f(long long x) {
    return A*SQ(x) + B*x + C;
}

//Binary search
int solve() {
    if(C >= k) {
        return 0;
    }
    long long L = 1;
    long long  R = ceil(sqrt(k));
    while(L <= R) {
        long long mid = L+R >> 1;
        if(f(mid) >= k && f(mid-1) < k) {
            return mid;
        }else if(f(mid) < k) {
            L = mid+1;
        }else {
            R = mid-1;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--) {
        cin >> A >> B >> C >> k;
        cout << solve() << "\n";
    }

    return 0;
}

