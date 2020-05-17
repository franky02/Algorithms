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

bool isPossible(int* boards,int n,int k,int curr_min){
    int painter = 1;
    int curr_board = 0;
    fo(i,n){
        if(curr_board + boards[i] > curr_min){
            painter += 1;
            curr_board = boards[i];
            if(painter > k){
                return false;
            }
        }else{
            curr_board += boards[i];
        }
    }
    return true;
}

//main function begins
int main(){
    int k,n;
    cin >> n >> k;
    int a[n];
    fo(i,n) {cin >> a[i];}

    //search space on time
    int s = a[n-1];
    int e = accumulate(a,a+n,0);
    int ans = -1;
    while(s <= e){
        int mid = (s+e)/2;
        if(isPossible(a,n,k,mid)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    cout << ans << endl;
}