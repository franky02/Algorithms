#include <bits/stdc++.h>
using namespace std;

//codechef BIGNO
bool cmpr(const string &s1, const string &s2) {
  string a = s1 + s2;
  string b = s2 + s1;
  return a > b;
}

int main() {
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<string> vc(n);
        for(int i = 0; i < n; i++){
          cin >> vc[i];
        }
        sort(vc.begin(), vc.end(), cmpr);
        for(int i = 0; i < n; i++){
          cout << vc[i];
        }
        return 0;
    }
}
