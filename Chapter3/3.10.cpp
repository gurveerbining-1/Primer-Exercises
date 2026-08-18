/*
Exercise 3.10: Write a program that reads a string of characters including punctuation
and writes what was read but with the punctuation removed
*/

#include <iostream>
#include <string>

int main(){
    std::string s;
    std::cin >> s;
    std::string noPunct;
    for(auto c : s){
        if(std::ispunct(c)){
            continue;
        }
        noPunct += c;
    }
    std::cout << noPunct << std::endl;

    return 0;
}