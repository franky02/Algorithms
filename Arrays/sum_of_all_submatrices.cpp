#include<iostream>
using namespace std;

//brute force approach - O(n^6)
int sumofAllSubmatrices1(int a[][100],int m,int n){
	int sum = 0;
	for(int top_left_i = 0; top_left_i < m; top_left_i++){
		for(int top_left_j = 0; top_left_j < n; top_left_j++){
			for(int bottom_right_i = top_left_i+1; bottom_right_i < m; bottom_right_i++){
				for(int bottom_right_j = top_left_j+1; bottom_right_j < n; bottom_right_j++){
					for(int i = top_left_i; i <= top_left_j; i++){
						for(int j = bottom_right_i; j <= bottom_right_j; j++){
							sum += a[i][j];
						}
					}
				}
			}
		}
	}
	return sum;
}

//cummulative sum approach - O(n^4)
int sumofAllSubmatrices2(int a[][100],int m,int n){
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

	/*for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << prefix[i][j] << " ";
		}cout << endl;
	}*/

	int sum = 0;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			for(int x = i+1; x < m; x++){
				for(int y = j+1; y < n; y++){
					sum += prefix[x][y] - prefix[i-1][y] - prefix[x][j-1] + prefix[i-1][j-1];
				}
			}
		}
	}
	return sum;
	
}

//Most EFFICIENT
//contribution of element approach - O(n^2)
int sumofAllSubmatrices3(int arr[][100],int m,int n){
	int sum = 0;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			int tl = (i+1)*(j+1);
			int br = (m-i)*(n-j);
			sum += (tl * br) * arr[i][j];
		}
	}
	return sum;
}

int main(){
	int m,n;
	cin >> m >> n;
	int arr[100][100] = {0};

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}

	cout << sumofAllSubmatrices2(arr,m,n) << endl;
	return 0;
}