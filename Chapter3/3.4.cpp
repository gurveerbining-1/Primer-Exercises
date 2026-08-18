/*
Exercise 3.4: Write a program to read two strings and report whether the strings
are equal. If not, report which of the two is larger. Now, change the program to report
whether the strings have the same length, and if not, report which is longer.
*/
#include <iostream>
#include <string>

void is_equal(std::string s1, std::string s2){
    if(s1 == s2){
        std::cout << s1 << " is equal to " << s2 <<std::endl;
    }
    else if(s1 > s2){
        std::cout << s1 << " is larger than " << s2 <<std::endl;
    }
    else{
        std::cout << s2 << " is larger than " << s1 <<std::endl;
    }
}

void is_longer(std::string s1, std::string s2){
    if(s1.size() == s2.size()){
        std::cout << s1 << " is the same size as " << s2 <<std::endl;
    }
    else if(s1.size() > s2.size()){
        std::cout << s1 << " is longer than " << s2 <<std::endl;
    }
    else{
        std::cout << s2 << " is longer than " << s1 <<std::endl;
    }
}
int main(){
    is_equal("abc", "abc");
    
    is_longer("abc", "abc");
    
    return 0;
}