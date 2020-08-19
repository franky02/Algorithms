#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;

//you are given an array of N integers 1 <= N <= 1e5
//you have to answer Q queries 1 <= Q <= 1e5
//in each query you have to answer whether an element x is present in the array or not
int n;
int a[n];

void brute() {
    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        bool found = false;
        for(int i = 0; i < n; i++) {
            if(a[i] == x) found = true;
            if(found) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }
}

void fast() {
    //Binary search on a monotonic function
    //if f(i) < x then all [0,i-1] will be < x
    int lo = 0;
    int hi = n-1;
    bool found = false;
    while(lo <= hi) {
        int mid = lo+hi >> 1;
        if(a[mid] < x) {
            lo = mid+1
        }else if(a[mid] > x) {
            hi = mid-1;
        }else {
            found = true;
            break;
        }
    }
    if(found) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    brute(); //O(Q.N) => 10e10 opeartions ~ 100 seconds => TLE
    fast();  //O(Q.log(N)) => 5e5 operations ~ < 1 second



    return 0;
}

