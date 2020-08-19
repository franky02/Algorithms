#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 1e6;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        int flag = 1;
        int fre[N] = {0};
        for(int i = 0; i < n; i++) {
            fre[a[i]]++;
            if(fre[a[i]] > 2) {
                cout << "NO" << "\n";
                flag = 0;
                break;
            }
            if(i == n-1 && fre[a[i]] == 2) {
                cout << "NO" << "\n";
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            cout << "YES" << "\n";
            for(int i = 0; i < n; i++) {
                if(fre[a[i]] == 2) {
                    cout << a[i] << " ";
                    fre[a[i]]--;
                }
            }
            for(int i = n-1; i >= 0; i--) {
                if(fre[a[i]] == 1) {
                    cout << a[i] << " ";
                    fre[a[i]]--;
                }
            }
            cout << "\n";

        }

    }
    return 0;
}

