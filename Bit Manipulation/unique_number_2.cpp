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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x,ans=0,pos=0;
    cin >> n;
    int a[n];
    fo(i,n){
        cin >> x;
        a[i] = x;
        ans = ans^x;
    }
    //deb(ans);
    int temp = ans;
    while((temp&1)!=1){
        pos++;
        temp = temp>>1;    
    }
    
    int mask = 1<<pos;
    int n1 = 0;
    int n2 = 0;
    fo(i,n){
        if((a[i]&mask) > 0){
            n1 = n1^a[i];
        }
    }
    n2 = ans^n1;
    cout << n1 << " " << n2 << endl;
    
}