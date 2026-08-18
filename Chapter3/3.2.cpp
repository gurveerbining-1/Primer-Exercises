/*
Exercise 3.2: Write a program to read the standard input a line at a time. Modify your
program to read a word at a time.
*/
#include <iostream>
#include <string>

void read_line(){
    std::string line;
    while(std::getline(std::cin, line)){
        std::cout << line << std::endl;        
    }
    
}

void read_word(){
    std::string word;
    while(std::cin >> word){ // as long as there is no whitespace this expression is true
        std::cout << word << std::endl;
    }
}
int main(){
    //read_word();
    //read_line();
    return 0;
}