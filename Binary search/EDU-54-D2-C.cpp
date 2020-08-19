#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;

//TIME LIMIT : 1sec

//you are given an integer K <= 1e17
//find two integers a and b such that a*b == k && a+b == k

//O(k^2) ~ 1e34 operations => Clear TLE
void brute() {
    int k;
    cin >> k;
    for(int a = 0; a < k; a++) {
        for(int b = 0; b < k; b++) {
            if((a+b) == k && (a*b) == k) {
                cout << a << " " << b << "\n";
            }
        }
    }
}

//if a+b == k, then b has to be k-a;
//O(k) ~ 1e18 operations => TLE
void good() {
    int k;
    cin >> k;
    for(int a = 0; a < k; a++) {
        int b = k-a;
        if((a+b) == k && (a*b) == k) {
            cout << a << " " << b << "\n";
        }
    }
}

//observe that a*(k-a) is monotonic in (0,k/2)
void fast() {
    int k;
    cin >> k;
    int lo = 0;
    int hi = k/2;
    while(lo <= hi) {
        int mid = (lo+hi) >> 1;
        int f = mid*(k-mid);
        if(f == k) {
            cout << mid << " " << k-mid << "\n";
            break;
        }else if(f < k){
            lo = mid+1;
        }else {
            hi = mid-1;
        }
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        fast();
    }



    return 0;
}

