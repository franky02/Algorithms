#include<bits/stdc++.h>
using namespace std;
#define I INT32_MAX
#define str string 
#define MOD 1000000007 
#define ll long long
#define fo(i,n) for (int i = 0; i < n; i++) 
#define Fo(i,k,n) for (int i = k; i <= n; i++) 
#define Fr(n,k,i) for (int i = n; i >= k; i--) 
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef set<int> si;
typedef vector<ll> vl;

//main function begins
int main(){
    int n,m,i,j;
    cin >> n >> m >> i >> j;
    //clearBits
    int mask = (-1<<(j+1))|(~(-1<<(i)));
    int masked_n = n&(mask);

    //shift m to replace
    int shifted_m = m<<(i);
    int ans = masked_n|shifted_m; 
    cout << ans << endl;
}