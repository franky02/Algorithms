#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin >> s;
	int freq[1000] = {0};
	int res[1000] = {0};
	int n = s.length();
	for(int i = 0; i < n; i++){
		res[i] = 1 + freq[s[i]-'a']++;
	}
	//max_frequency 
	int max_freq = -1;
	int pos = -1;
	for(int i = 0; i < n; i++){
		max_freq = max(max_freq,res[i]);
	}

	int i = 0;
	while(i < n){
		if(res[i] == max_freq){
			break;
		}
		i++;
	}
	cout << s[i] << endl;
}