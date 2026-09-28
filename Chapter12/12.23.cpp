/*
Write a program to concatenate two string literals, putting the result
in a dynamically allocated array of char. Write a program to concatenate two library
strings that have the same value as the literals used in the first program.
*/

#include <iostream>
#include <string>
#include <cstring>

int main(){

	//using string literals
	const char* l1 = "String Literal 1";
	const char* l2 = "String Literal 2";
	
	std::size_t len1 = std::strlen(l1);
        std::size_t len2 = std::strlen(l2);
	std::size_t len3 = len1 + len2 + 1;
	
	char* combined = new char[len3](); // add 1 extra spot for the null terminator
	
	

	for(int i = 0; i < len1; i++){
		combined[i] = l1[i];
	}
	
	int j = 0;
	for(int i = len1; i < len3; i++){
		combined[i] = l2[j];
		j++;
	}

	std::cout << combined << "\n";

	delete [] combined;


	// using library strings
	std::string s1 = "lib 1";
	std::string s2 = "lib 2";
		

	return 0;
}
