#include<iostream>
using namespace std;

//Search in a 2d Sorted array (row-wise and col-wise)
//O(m+n) Time
void stair_search(int a[][100],int m,int n,int key){
	int i = 0;
	int j = n-1;
	while(j >= 0 && i <= m-1){
		if(key > a[i][j]){
			i++;
		}else if(key < a[i][j]){
			j--;
		}else{
			cout << "Found at : " << i << "," << j << endl; 
			break;
		}
	}
	if(i == m || j == -1){
		cout << "Not found" << endl;
	}
}

int main(){
	int m,n,key;
	int a[100][100];
	cin >> m >> n;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	cin >> key;
	stair_search(a,m,n,key);

}