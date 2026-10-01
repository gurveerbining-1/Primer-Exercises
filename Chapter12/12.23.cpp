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
	
	std::strcpy(combined, l1);
	std::strcat(combined, l2);

	std::cout << combined << "\n";

	delete [] combined;


	// using library strings
	std::string s1 = "lib 1";
	std::string s2 = "lib 2";
	
	std::size_t len_s1 = s1.size();
	std::size_t len_s2 = s2.size();
	std::size_t total_len = len_s1 + len_s2;

	char* combined_s = new char[total_len + 1];
	
	std::memcpy(combined_s, s1.c_str(), len_s1);
	std::memcpy(combined_s + len_s1, s2.c_str(), len_s2);
	combined_s[total_len] = '\0';	

	std::cout << combined_s << "\n";
	
	delete [] combined_s;	

	return 0;
}
