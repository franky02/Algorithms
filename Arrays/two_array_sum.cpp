#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    //taking input
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    //convert to strings
    string s1;
    for(int i) {
        s1 += to_string(i);
    }
    string s2;
    for (int i : b) {
        s2 += to_string(i);
    }
    //convert to integers
    int num1 = stoi(s1);
    int num2 = stoi(s2);
    int num3 = num1 + num2;
    
    int len = max(m,n) + 1;
    int c[len];
    for(int i = len-1 ; i >= 0; i--) {
        c[i] = num3 % 10;
        num3 /= 10;
    }
    if(c[0] == 0){
        for(int i = 1; i < len; i++){
            cout << c[i] << ", ";
        }
    }else{
        for(int i = 0; i < len; i++){
            cout << c[i] << ", ";
        }
    }
    cout << "END";

    return 0;
}