#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;
#define deb(x) cout << #x << "=" << x << "\n";
#define DEBUG(a) for(auto &x:a) cout << x << " ";

char bo[8][8];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> k;
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                bo[i][j] = '.';
            }
        }
        int q = k/8;
        int r = k%8;
        for(int i = q; i < 8; i++) {
            if(i == q) {
                for(int j = r; j < 8; j++) {
                    bo[i][j] = 'X';
                }
            }else {
                for (int j = 0; j < 8; j++) {
                    bo[i][j] = 'X';
                }
            }
        }
        bo[0][0] = 'O';
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                cout << bo[i][j];
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}

