#include<iostream>
using namespace std;

int main(){
	char a[][10] = {{'a','b','\0'},{'d','e','f','\0'}};
	//char a[][10] = {"ab","cdf","deg"};
	cout << a[0][0] << endl;
	cout << a[1] << endl;

	return 0;
}