#include<iostream>
#include<climits>
using namespace std;

//O(m*n) Time and O(1) space 
int maxSumSubmatrix(int a[][100],int m,int n){
	//suffix sum matrix
	for(int j = n-1; j >= 0; j--){
		a[m-1][j-1] = a[m-1][j] + a[m-1][j-1];
	}
	for(int i = m-1; i >= 0; i--){
		a[i-1][n-1] = a[i][n-1] + a[i-1][n-1];
	}

	for(int i = m-2; i >= 0; i--){
		for(int j = n-2; j >= 0; j--){
			a[i][j] = a[i][j] + a[i+1][j] + a[i][j+1] - a[i+1][j+1];
		}
	}

	int result = INT_MIN;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			result = max(result,a[i][j]);
		}
	}
	return result;
	
}

int main(){
	int m,n;
	cin >> m >> n;
	int a[100][100];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	cout << maxSumSubmatrix(a,m,n) << endl;
	return 0;
}