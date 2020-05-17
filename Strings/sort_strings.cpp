#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//comparator function
bool compare(string s1,string s2){
	//compare based on length
	return s1.length() < s2.length();
}
int main(){
	int n;
	cin >> n;
	cin.get();
	string s[100];
	//for string class 'cin.getline' doesn't work
	for(int i = 0; i < n; i++){
		getline(cin,s[i]);
	}
	//sorts lexicographically
	sort(s,s+n,compare);
	for(int i = 0; i < n; i++){
		cout << s[i] << endl;
	}

}