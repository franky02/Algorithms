#include<iostream>
#include<cstring>
using namespace std;
//Read N strings and find the largest one. 
//Dont store all queries
int main(){
	int n;
	char a[100];
	char largest[100];

	cin >> n;
	cin.get();

	int len = 0;
	int largest_len = 0;

	for(int i = 0; i < n; i++){
		cin.getline(a,1000);
		//cout << a << endl;

		len = strlen(a);
		if(len > largest_len){
			largest_len = len;
			strcpy(largest,a);
		}
	}

	cout << largest << " " << largest_len << endl;

}