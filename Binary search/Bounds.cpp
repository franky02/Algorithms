#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;
#define INF 1000000000000

//lower_bound(x) - We have a monotonic function and we have to find the first point x : f(x) >= k
//upper_bound(x) - We have a monotonic function and we have to find the first point x : f(x) > k
vector<int> v = {10,20,30,40,50};
int f(int x) {
    return v[x];
}

int lb(int k,int lo,int hi) {
    int ans = INT_MAX;
    while(lo <= hi) {
        int mid = (lo+hi)/2;
        if(f(mid) >= k) {
            ans = min(ans,mid);
            hi = mid-1;
            //look in the smaller half to check if theres an even smaller y < x such that f(y) >= k
        }else {
            lo = mid+1;
        }
    }
    return ans;
}

int ub(int k,int lo,int hi) {
    int ans = INT_MAX;
    while(lo <= hi) {
        int mid = (lo+hi)/2;
        if(f(mid) > k) {
            ans = min(ans,mid);
            hi = mid-1;
            //look in the smaller half to check if theres an even smaller x1 < x such that f(x1) >= k
        }else {
            lo = mid+1;
        }
    }
    return ans;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << lb(1,0,v.size()-1) << "\n";

    return 0;
}

