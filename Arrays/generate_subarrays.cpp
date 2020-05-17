#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int a[1000];
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < n; i++) {
		for(int j = i; j < n; j++) {
			for(int k = i; k <= j; k++) {
				cout << a[k] <<" ";
			}cout << endl;
		}
	}
}