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

bool isPossible(int* cook,int n,int p,int curr_min){
    //total pratas
    int count = 0;
    fo(i,n){
        //count the pratas for each cook
        int c = 0;
        int time = curr_min;
        int time_per_prata = cook[i];
        while(time > 0){
            time = time - time_per_prata;
            if(time >= 0){
                c += 1;
                time_per_prata += cook[i];
            }
        }
        count += c;
        if(count >= p){
            return true;
        }
    }
    return false;
}

//main function begins
int main(){
    int T;
    cin >> T;
    while(T--){
        int p,n;
        cin >> p >> n;
        int a[n]; //rank array
        fo(i,n) {cin >> a[i];}

        //search space 
        int s = 0;
        int e = MOD;
        int ans = -1;
        while(s <= e){
            int mid = (s+e)/2;
            if(isPossible(a,n,p,mid)){
                ans = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        cout << ans << endl;
    }
}