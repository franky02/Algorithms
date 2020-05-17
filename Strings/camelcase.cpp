#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	cout << s[0];
	for(int i = 1; i < s.length(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			cout << "\n" << s[i];
		}else{
			cout << s[i];
		}
	}
	
}
