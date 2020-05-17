#include<iostream>
using namespace std;

//Wave print pattern
void WavePrint(int a[][100], int m, int n){
	//Wave print
	for(int col = 0; col < n; col++){
		if(col % 2 == 0){
			for(int row = 0; row <= m-1; row++){
				cout << a[row][col] << " ";
			}
		}else{
			for(int row = m-1; row >= 0; row--){
				cout << a[row][col] << " ";
			}
		}
	}
}

void SpiralPrint(int a[][100], int m, int n){
	//Spiral print
	int startRow = 0;
	int startCol = 0;
	int endRow = m-1;
	int endCol = n-1;
	while(startRow <= endRow && startCol <= endCol){
		//first row
		for(int i = startCol; i <= endCol; i++){
			cout << a[startRow][i] << " ";
		}
		startRow++;
		//last col
		for(int i = startRow; i <= endRow; i++){
			cout << a[i][endCol] << " ";
		}
		endCol--;
		//last row
		if(startCol < endCol){
			for(int i = endCol; i >= startCol; i--){
				cout << a[endRow][i] << " ";
			}
			endRow--;
		}
		
		//start col
		if(startRow < endRow){
			for(int i = endRow; i >= startRow; i--){
				cout << a[i][startCol] << " ";
			}
			startCol++;
		}		
	}
}

int main(){
	int a[100][100] = {0};
	int m,n;
	//m Rows and n Cols
	cin >> m >> n;
	int val = 1;
	for(int row = 0; row < m; row++){
		for(int col = 0; col < n; col++){
			a[row][col] = val;
			val = val + 1;
			cout << a[row][col] << " ";
		}
		cout << endl;
	}
	//WavePrint(a,m,n);
	SpiralPrint(a,m,n);

	
}