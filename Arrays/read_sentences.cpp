#include<iostream>
using namespace std;
//Read a sentence or a paragraph and store it
//cin.get() reads single character
//put a loop to read characters till you get a '\n'

//delimiter helps to stop the sentence/paragraph
void readLine(char a[], int maxLen, char delim='\n'){
	int i = 0;
	char ch = cin.get();
	while(ch != delim){
		a[i] = ch;
		i++;
		if(i == maxLen-1){
			break;
		}
		ch = cin.get();
	}
	//after breaking from the loop
	a[i] = '\0';
	return;
}

//c++ has an inbuilt method called cin.getline(var,size,delim='\n')
int main(){
	char a[100];
	//readLine(a, 1000, '$');
	cin.getline(a,1000,'$');  
	cout << a << endl;

}