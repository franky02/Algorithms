#include<iostream>
using namespace std;

int main(){
	char a[] = {'a','b','c','d','e','\0'};
	cout << a << endl;

	char s1[] = "hello";
	char s2[] = {'h','e','l','l','o','\0'}; 
	cout << s1 << " " << sizeof(s1) << endl;
	cout << s2 << " " << sizeof(s2) << endl;
	char s3[10];
	cin >> s3;
	cout << s3 << endl;
}