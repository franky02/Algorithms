#include<iostream>
using namespace std;

//query = {(ti,tj),(bi,bj)} => {(i,j),(x,y)}
//O(m*n + q) Solution 
int main(){
	int m,n; //dimensions
	int q; //number of queries
	int ti,tj,bi,bj; //form of a query

	cin >> m >> n;

	int a[100][100];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	int prefix[m][n] = {0};
	prefix[0][0] = a[0][0];
	for(int col = 1; col < n; col++){
		prefix[0][col] = prefix[0][col-1] + a[0][col];
	}
	for(int row = 1; row < m; row++){
		prefix[row][0] = prefix[row-1][0] + a[row][0];
	}
	for(int i = 1; i < m; i++){
		for(int j = 1; j < n; j++){
			prefix[i][j] = a[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
		}
	}
	cin >> q;
	while(q--){
		cin >> ti >> tj;
		cin >> bi >> bj;
		/*if(ti = 0 || tj = 0){

		}*/
		int sum = prefix[bi][bj] - prefix[ti-1][bj] - prefix[bi][tj-1] + prefix[ti-1][tj-1];
		cout << sum;
	}
	return 0;
}