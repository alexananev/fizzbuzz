#include "fizzbuzz.hpp"
#include <iostream>

using namespace std;

void test(const std::vector<std::string> in, const std::vector<std::string> out){
	std::vector<std::string> result = fizzbuzz(in);
	
	cout << "Input: ";
	for(int i = 0; i < in.size(); i++)
		cout << in[i] << " ";
		
	cout << endl << "Output: ";
	for(int i = 0; i < out.size(); i++)
		cout << out[i] << " ";
		
	if(in == out)
		cout << endl << "OK!" << endl;
	else cout << endl << "Wrong answer" << endl;
	}

int main()
{
	vector<string> in1 = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0"},
			in2 = {"10000000", "1212312", "1231312", "12312312", "3241234121", "12121212"},
			in3 = {"31231231231131321", "32423413421432151", "53451345325325324535", "7653546231345322345"},
			in4 = {"352345324654565439529438759834272347895678324567234659328746529387454327956234782563745623", 
				"10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000002",
				"10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000005", 
				"10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000055"},
			in5 = {"a", "b", "c", "abc", "12-3"},
			in6 = {"-1", "2", "-3", "-4", "-5", "6", "-7", "8", "-9", "0"};

    
	vector<string> out1 = {"1", "2", "fizz", "4", "buzz", "fizz", "7", "8", "fizz", "fizzbuzz"},
			out2 = {"buzz", "fizz", "1231312", "fizz", "3241234121", "fizz"},
			out3 = {"fizz", "fizz", "fizzbuzz", "buzz"},
			out4 = {"352345324654565439529438759834272347895678324567234659328746529387454327956234782563745623", 
				"fizz",
				"fizzbuzz", 
				"buzz"},
			out5 = {"NaN", "NaN", "NaN", "NaN", "NaN"},
			out6 = {"-1", "2", "fizz", "4", "buzz", "fizz", "-7", "8", "fizz", "fizzbuzz"};


	test(in1, out1);
	test(in2, out2);
	test(in3, out3);
	test(in4, out4);
	test(in5, out5);
	test(in6, out6);
	

	return 0;
}
