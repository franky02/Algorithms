#include<bits/stdc++.h>
using namespace std;

//char * strtok(char s[], char delim[])
//for first token : strtok(s,delim)
//from second token onwards : strtok(null,delim)

int main(){
	char s[100] = "HelloWorldThisisFranklin";
	char* ptr = strtok(s," ");
	cout << ptr << endl;
	while(ptr != NULL){
		ptr = strtok(NULL," ");
		cout << ptr << endl;
	}

}