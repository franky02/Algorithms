#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;
#define deb(x) cout << #x << "=" << x << "\n";
#define DEBUG(a) for(auto &x:a) cout << x << " ";
#define prq priority_queue<int,vector<int>,greater<int>>
void debugPQ(prq pq) {while (!pq.empty()) {cout << pq.top() << " "; pq.pop();} cout << "\n";}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        prq pq,temp;
        while(n--) {
            int a;
            cin >> a;
            pq.push(a);
        }
        int cnt1 = 0;
        int cnt2 = 0;
        while(!pq.empty()) {
            if(x < pq.top()) {
                x = x*2;
                cnt1 += 1;
            }else if(x >= pq.top() && x <= 2*pq.top()) {
                int top = pq.top();
                pq.pop();
                x = 2*top;
                cnt1 += 1;
            }else if(x > 2*pq.top()) {
                pq.pop();
                cnt2 += 1;
            }
        }
        cout << cnt1+cnt2 << "\n";
    }
    return 0;
}

