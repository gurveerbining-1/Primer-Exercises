/*
Exercise 3.5: Write a program to read strings from the standard input, concatenating what is read into one large string. Print the concatenated string. Next, change
the program to separate adjacent input strings by a space.
*/

#include <iostream>
#include <string>

int main(){

    std::string s1;
    std::string s2;
    bool first = true;
    while(std::cin >> s1){
        if(s1 == "exit"){
            break;
        }
        if(!first){
            s2 += " ";
        }
        s2 += s1;
        first = false;
    }

    std::cout << s2 << std::endl;

    return 0;
}