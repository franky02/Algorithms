#include<iostream>
using namespace std;

int main(){
	//Read a list of strings and store them in a 2d char array
	char a[100][100];
	int n;
	cin >> n;

	cin.get();
	for(int i = 0; i < n; i++){
		cin.getline(a[i],100);
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
}