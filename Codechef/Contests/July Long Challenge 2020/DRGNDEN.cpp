#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e5;
#define deb(x) cout << #x << "=" << x << "\n"
#define debug1(a) for(auto &x:a) cout << x << " "
#define debug2(p) for(auto &x:p) cout << "(" << x.first << "," << x.second << ")" << "\n"

unordered_map<long long,vector<long long>> mp;
long long fre(long long arr[],long long n,long long qs,long long qe,long long x) {
    long long a = lower_bound(mp[x].begin(),mp[x].end(),qs)- mp[x].begin();
    long long b = upper_bound(mp[x].begin(),mp[x].end(),qe)- mp[x].begin();
    return b-a;
}

void bld(long long a[],long long seg[],long long si,long long ss,long long se) {
    if(ss == se) {
        seg[si] = a[ss];
    }else {
        long long mid = (ss+se) >> 1;
        bld(a,seg,2*si,ss,mid);
        bld(a,seg,2*si+1,mid+1,se);
        seg[si] = max(seg[2*si],seg[2*si+1]);
    }
}

long long qry(long long a[],long long seg[],long long si,long long ss,long long se,long long qs,long long qe) {
    if(qs > se || qe < ss) {
        return INT_MIN;
    }else if(qs <= ss && se <= qe) {
        return seg[si];
    }else {
        long long mid = (ss+se) >> 1;
        return max(qry(a,seg,2*si,ss,mid,qs,qe),qry(a,seg,2*si+1,mid+1,se,qs,qe));
    }
}

void upd(long long a[],long long seg[],long long si,long long ss,long long se,long long i,long long x) {
    if(ss == se) {
        a[i] = x;
        seg[si] = x;
    }else {
        long long mid = (ss+se) >> 1;
        if(i <= mid) {
            upd(a,seg,2*si,ss,mid,i,x);
        }else {
            upd(a,seg,2*si+1,mid+1,se,i,x);
        }
        seg[si] = max(seg[2*si],seg[2*si+1]);
    }
}

stack<long long> clear(stack<long long> s) {stack<long long> temp;s.swap(temp);return s;}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,q;
    cin >> n >> q;
    long long h[n],a[n],lsum[n],rsum[n];
    for(long long i = 0; i < n; i++) {
        cin >> h[i];
    }
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long* segh = new long long[4*n]{0LL};
    bld(h,segh,1,0,n-1);
    stack<long long> s1,s2;
    for(long long i = 0; i < n; i++) {
        lsum[i] = a[i];
        while(!s1.empty() && h[s1.top()] <= h[i]) {
            s1.pop();
        }
        if(!s1.empty()) {
            lsum[i] += lsum[s1.top()];
        }
        s1.push(i);
    }
    for(long long i = n-1; i >= 0; i--) {
        rsum[i] = a[i];
        while(!s2.empty() && h[s2.top()] <= h[i]) {
            s2.pop();
        }
        if(!s2.empty()) {
            rsum[i] += rsum[s2.top()];
        }
        s2.push(i);
    }
    s1 = clear(s1); s2 = clear(s2);
    //cout << "LSUM:" << " ";for(long long i = 0; i < n; i++) {cout << lsum[i] << " ";}cout << "\n";
    //cout << "RSUM:" << " ";for(long long i = 0; i < n; i++) {cout << rsum[i] << " ";}cout << "\n";
    while(q--) {
        long long type;
        cin >> type;
        if(type == 1) {
            long long b,k;
            cin >> b >> k;
            b -= 1;
            a[b] = k;
            s1 = clear(s1); s2 = clear(s2);
            for(long long i = 0; i < n; i++) {
                lsum[i] = a[i];
                while(!s1.empty() && h[s1.top()] <= h[i]) {
                    s1.pop();
                }
                if(!s1.empty()) {
                    lsum[i] += lsum[s1.top()];
                }
                s1.push(i);
            }
            for(long long i = n-1; i >= 0; i--) {
                rsum[i] = a[i];
                while(!s2.empty() && h[s2.top()] <= h[i]) {
                    s2.pop();
                }
                if(!s2.empty()) {
                    rsum[i] += rsum[s2.top()];
                }
                s2.push(i);
            }
        }else {
            long long b,c;
            cin >> b >> c;
            b -= 1;
            c -= 1;
            if(b == c) {
                cout << a[b] << "\n";
            }else if(b < c) {
                if(qry(h,segh,1,0,n-1,b,c) != h[b]) {
                    cout << -1 << "\n";
                }else if(fre(h,n,b,c,h[b]) > 1) {
                    cout << -1 << "\n";
                }else {
                    cout << lsum[c]-lsum[b]+a[b] << "\n";
                }
            }else if(b > c) {
                if(qry(h,segh,1,0,n-1,c,b) != h[b]) {
                    cout << -1 << "\n";
                }else if(fre(h,n,c,b,h[b]) > 1){
                    cout << -1 << "\n";
                }else {
                    cout << rsum[c]-rsum[b]+a[b] << "\n";
                }
            }
        }
    }
    return 0;
}