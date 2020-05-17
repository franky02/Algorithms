#include<iostream>
#include<cstring>
using namespace std;

//Designing String Tokeniser
char* mystrtok(char* s, char delim){
	//state of a static variable is initialized once in a function call
	static char* input = NULL;
	if(s != NULL){
		//first call (initialize to whole string)
		input = s;
	}
	//base case - NULL input
	if(input == NULL){
		return NULL;
	}
	//start extracting tokens and store them in a DYNAMIC array
	char* output = new char[strlen(input)+1];
	int i = 0;
	while(input[i] != '\0'){
		if(input[i] != delim){
			output[i] = input[i];
		}else{
			output[i] = '\0';
			input = input + i + 1;
			return output;
		}

		i++;
	}
	//corner case
	output[i] = '\0';
	input = NULL;
	return output;

}

int main(){
	char s[100] = "Hello World, This is Franklin";

	char* ptr = mystrtok(s,' ');
	cout << ptr << endl;
	while(ptr != NULL){
		ptr = mystrtok(NULL,' ');
		cout << ptr << endl;
	}

}