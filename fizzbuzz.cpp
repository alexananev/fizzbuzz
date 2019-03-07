#include <iostream>
#include <string>

using namespace std;

int main(){
	string input;
	while(cin >> input){
		int div = 0;
		int size = input.size();
		for(int i = 0; i < size; i++){
			switch (input[i]){
				case '1': case '4': case '7': 
						div += 1; break;
				case '2': case '5': case '8':
						div += 2; break;
				
			}
			if (div > 2)
				div -= 3;
		}
		if (div)
			if (input[size-1] != '0' && input[size-1] != '5')
				cout << input;
			else cout << "buzz";
		else{
			cout << "fizz";
			if (input[size-1] == '0' || input[size-1] == '5')
				cout <<"buzz";
		}
		cout << " ";
	}	
	
	
	
	return 0;
}
