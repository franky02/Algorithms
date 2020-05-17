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

bool isPossible(int* stalls,int n,int c,int min_sep){
    int count = 1;
    int last_cow = stalls[0];
    Fo(i,1,n){
        if(stalls[i] - last_cow >= min_sep){
            last_cow = stalls[i];
            count += 1;
            if(count == c){
                return true;
            }
        }
    }
    return false;
}
//main function begins
int main(){
    int n,c;
    cin >> n >> c;
    int a[n];
    fo(i,n) {cin >> a[i];}
    
    sort(a,a+n);

    //search space = stall space
    int s = 0;
    int e = a[n-1] - a[0];
    int ans = -1;
    while(s <= e){
        int mid = (s+e)/2;
        if(isPossible(a,n,c,mid)){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    cout << ans << endl;
}