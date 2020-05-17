#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char x;
	cin >> x;
	if(islower(x)){
		cout << "Lowercase" << endl;
	}else if(isupper(x)){
		cout << "uppercase" << endl;
	}else{
		cout << "Invalid" << endl;
	}
}
