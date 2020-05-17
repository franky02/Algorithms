#include<bits/stdc++.h>
using namespace std;

void magical_park(char a[][100], int m, int n, int k, int s){

	bool success = true;

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			char curr = a[i][j];
			//check strength
			if(s < k){
				success = false;
				break;
			}
			//check characters
			if(curr == '*'){
				s += 5;
			}else if(curr == '.'){
				s -= 2;
			}else{
				break;
			}

			if(j != n-1){
				s--;
			}
		}
	}

	if(success){
		cout << "yes" << endl;
		cout << s << endl;
	}else{
		cout << "no" << endl;
	}
}



int main(){
	int m,n,k,s;
	cin >> m >> n >> k >> s;
	char park[100][100];
	//get input
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> park[i][j];
		}
	}
	magical_park(park,m,n,k,s);

	return 0;

}
//initial strength = s
//threshold strength at every point = k
// . => s -= 2
// * => s += 5
// # => blocked (jump to next row, no change in s)
// one move to right => s -= 1 (except for the last column)


//TEST CASE
//input :
// . . * .
// . # . .
// * * . .
// . # * * 

//output:
//"yes",13