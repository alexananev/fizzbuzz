all:
	g++-7 fizzbuzz.cpp -std=c++1z -o build/main.out
test:
	g++-7 unit_test.cpp -std=c++1z -o build/test.out
