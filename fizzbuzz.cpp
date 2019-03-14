#include "fizzbuzz.hpp"					// header with replacer

#include <iostream>
#include <string>


using namespace std;

int main(int argc, char* argv[]){
	vector <string> input;
	
	for(int i = 1; i < argc; i++){
		input.push_back(string(argv[i]));	
	}
	
	vector <string> output = fizzbuzz(input); 	// calling replacer
		
	for(int i = 1; i < argc; i++){
		cout << output[i] << " ";
	}
	cout << endl;
	
	
	
	
	return 0;
}
