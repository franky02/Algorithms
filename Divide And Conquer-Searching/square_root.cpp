#include<iostream>
using namespace std; 
//look for monotonic search space
double square_root(int n,int p){
    //integer part - binary search
    int s = 0;
    int e = n;
    double ans = -1;
    while(s <= e){
        int mid = (s+e)/2;
        if(mid * mid == n){
            return mid;
        }else if(mid * mid > n){
            ans = mid;
            e = mid - 1;
        }else{
            ans = mid;
            s = mid + 1;
        }
    }
    //floating part - brute force
    double inc = 0.1;
    for(int rep = 1; rep <= p; rep++){
        while(ans * ans <= n){
            ans = ans + inc;
        }
        ans = ans - inc;
        inc = inc/10;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << square_root(n,3) << endl;
}