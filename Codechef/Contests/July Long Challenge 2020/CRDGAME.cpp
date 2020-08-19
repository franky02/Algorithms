#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;
#define deb(x,y) cout << #x << "=" << x << #y << "=" << y << "\n"
#define DEBUG(a) for(auto &x:a) cout << x << " ";

int dig(int x) {
    int sum = 0;
    while(x) {
        int pop = x%10;
        sum += pop;
        x /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long ch = 0,mo = 0;
        while(n--) {
            int a,b;
            cin >> a >> b;
            //deb(dig(a),dig(b));
            if(dig(a) > dig(b)) {
                ch += 1;
            }else if(dig(a) < dig(b)) {
                mo += 1;
            }else if(dig(a) == dig(b)) {
                ch += 1;
                mo += 1;
            }
        }
        if(ch > mo) {
            cout << 0 << " " << ch << "\n";
        }else if(ch < mo) {
            cout << 1 << " " << mo << "\n";
        }else if(ch == mo) {
            cout << 2 << " " << ch << "\n";
        }
    }
    return 0;
}

