# Class_Exercise
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<memory>
#include<vector>
#include<string>

using namespace std;

class smartString{

	vector<string> str;
	string abc;
	int index;

public:
	vector<string> append(vector<string> str){
		cout << "Input string to add: ";
		cin >> abc;
		str.push_back(abc);
	}

	int length(){
		return str.size();
	}

	string return_Char(){
		cout << "Input index: ";
		cin >> index;
		return str[index];

	}
	void printStr(){
		for (int i = 0; i < str.size(); i++)
			cout<< str[i] << ' ';

	}
	

};

int main(){

	smartString smart_String;
	vector<string> temp;
	smart_String.append(temp);
	smart_String.length();
	smart_String.return_Char();
	smart_String.printStr();

	return 0;
}
