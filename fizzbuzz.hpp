#include <vector>
#include <string>




std::vector<std::string> fizzbuzz(std::vector<std::string> input_vec){
	std::vector<std::string> output;
	for(int j = 0; j < input_vec.size(); j++){
		
		std::string input = input_vec[j];
		int size = input.size();
		int div = 0;
		
		bool NaN = false;
		
		for(int i = 0; i < size; i++){
			switch (input[i]){
				case '1': case '4': case '7': 
						div += 1; break;
				case '2': case '5': case '8':
						div += 2; break;
				case '0': case '3': case '6': case '9':
						break;
				case '-':
					if(i == 0) break;
				default:
					NaN = true; break;
				
			}
			if (NaN){
				output.push_back("NaN");
				break;
			}
			if (div > 2)
				div -= 3;
		}
		if(NaN)
			continue;
		
		if (div)
			if (input[size-1] != '0' && input[size-1] != '5')
				output.push_back(input);
			else output.push_back("buzz");
		else{
			
			if (input[size-1] == '0' || input[size-1] == '5')
				output.push_back("fizzbuzz");
			else output.push_back("fizz");
		}
		
	}
	return output;
}

