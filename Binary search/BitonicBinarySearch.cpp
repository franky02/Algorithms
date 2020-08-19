#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2e6 + 7;

//There's a point P that lies on the x-axis, P(x1,0), where 1 <= x1 <= 1e16
//We have to find the point P by asking some questions to the judge
//You can ask Q queries (Q <= 150) in the form "!k"
//The judge returns the distance between P and (k,0)

//say P(10,0)
//Q1 : !1 => 9
//Q2 : !8 => 2

//The function is monotonically dec till x1
//but after x1, it monotonically increases
//Q3 : !11 => 1

//BITONIC function!
//strictly inc till a point A then strictly dec or vice versa

void solve() {
    //Perform Binary search?
    int lo = 0;
    int hi = (int)1e16;
    while(lo <= hi) {
        int mid = lo+hi >> 1;
        cout << "! " << mid << "\n";
        int d1,d2;
        cin >> d1;
        cout << "! " << mid << "\n";
        if(d1 == 0) {
            break;
        }
        cout << "! " << mid+1 << "\n";
        cin >> d2;
        //if(f(mid) > f(mid+1)) we are in the first half(decreasing side) else the second half
        if(d1 > d2) {
            lo = mid+1;
        }else {
            hi = mid-1;
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    return 0;

}

