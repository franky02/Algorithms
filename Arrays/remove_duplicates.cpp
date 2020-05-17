#include<iostream>
#include<cstring>
using namespace std;
//remove consecutive duplicates from a string
//ccooodding => coding

void removeDuplicates(char a[]){
	int len = strlen(a);
	if(len == 1 || len == 0){
		return;
	}
	int prev_index = 0;
	for(int curr_index = 1; curr_index < len; curr_index++){
		if(a[prev_index] != a[curr_index]){
			prev_index++;
			a[prev_index] = a[curr_index];
		}
	}
	a[prev_index+1] = '\0';
	return;
}


int main(){
	char a[100];
	cin.getline(a,100);
	removeDuplicates(a);
	cout << a << endl;
}