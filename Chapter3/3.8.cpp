/*
Exercise 3.8: Rewrite the program in the first exercise, first using a while and again
using a traditional for loop. Which of the three approaches do you prefer and why?

I prefer using the range for loop because I don't need worry about the index and if s[i] is a valid position

*/

#include <iostream>
#include <string>

int main(){
    std::string s;
    std::cin >> s;
    int j = 0;
    /*
    while(j < s.size()){
        s[j] = 'X';
        j++;
    }
    */
    for(int i = 0; i < s.size(); i++){
        s[i] = 'X';
    }

    std::cout << s << std::endl;
    return 0;
}