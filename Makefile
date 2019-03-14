all:
	g++-7 fizzbuzz.cpp fizzbuzz.hpp -std=c++1z -o build/main.out
test:
	g++-7 fizzbuzz.hpp unit_tests.cpp -std=c++1z -o build/test.out
