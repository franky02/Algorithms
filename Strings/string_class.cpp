#include<iostream>
#include<string>
using namespace std;
//String class in c++ STL - containers
int main(){
	string s0;
	string s1 = "Coding Blocks";
	string s2 = "Hello World";
	string s3(s2);
	string s4(s0);
	char a[] = {'a','b','c','\0'};
	string s5(a);

	cout << s0 << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;

	if(s0.empty()){
		cout << "true" << endl;
	}else{
		cout << "false" << endl;
	}

	//append to a string 
	s0.append("c++");
	//check if string is empty
	if(s0.empty()){
		cout << "true" << endl;
	}else{
		cout << "false" << endl;
	}

	//calculating length
	cout << s1.length() << endl;
	cout << s0.length() << endl;
	//clear all characters
	s0.clear();
	cout << s0.length() << endl;

	//comparing strings 
	s0 = "Apple";
	s1 = "Mango";
	//compares 's0' with 's1' lexicographically (returns >/</==)
	cout << s0.compare(s1) << endl;

	//overloading operators
	if(s0 > s1){
		cout << "Apple is lexicographically greater" << endl;;
	}else{
		cout << "Mango is lexicographically greater" << endl;;
	}

	//access a character of a string
	cout << s1[4] << endl;

	//find (starting)index of a word
	string s = "Hello World this is Franklin";
	int index = s.find("this");
	cout << index << endl;

	//erase method
	string word = "World";
	int idx = s.find(word);
	int len = word.length();
	//starting from index "idx" delete "len" number of characters
	s.erase(idx,len+1);

	cout << s << endl;

	//iterate over all characters in a string
	for(int i = 0; i < s.length(); i++){
		cout << s[i];
	}cout << endl;

	//using iterators
	//iterator 'it' is a pointer 
	//string::iterator it
	for(auto it = s.begin(); it != s.end(); it++){
		cout << *it;
	}cout << endl;

	//for each loop to iterate, 'auto' keyword detects the datatype automatically
	for(auto c : s){
		cout << c;
	}cout << endl;

}