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

int getBit(int n,int i){
    int mask = 1<<i;
    int bit = n & mask;
    return bit > 0 ? 1 : 0;
}

int setBit(int n,int i){
    int mask = 1<<i;
    int ans = n|mask;
    return ans; 
}

void clearBit(int &n,int i){
    int mask = ~(1<<i);
    n = n&(mask);
}

void updateBit(int &n,int i,int x){
    int mask = ~(1<<i);
    int cleared_n = n&(mask);
    n = cleared_n|(x<<i);
}

int clearLastBits(int n,int i){
    int mask = (-1<<i);
    return n&(mask);
}

int clearRangeOfBits(int n,int i,int j){
    int mask = (-1<<(j+1))|(~(-1<<(i)));
    return n&(mask);
}


int main(){
    int n;
    cin >> n;
    /*cout << getBit(n,i) << endl;
    cout << setBit(n,i) << endl;
    cout << clearLastBits(n,i) << endl;*/
    cout << clearRangeOfBits(n,1,3) << endl;
    
}