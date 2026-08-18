/*
Exercise 3.17: Read a sequence of words from cin and store the values a vector. After you’ve read all the words, process the vector and change each word to uppercase.
Print the transformed elements, eight words to a line.
*/
#include <iostream> 
#include <vector>
#include <string>
#include <cctype>

int main(){
    std::vector<std::string> v;
    std::string s;
    while(std::cin >> s){
        v.push_back(s);
    }

    // after all words are read change each word to uppercase
    for(std::string &str : v){
        for(char &x : str){ // every char in each string stored in v
            x = std::toupper(static_cast<char>(x));
        }
    }

    int word_count = 0;
    for(auto s : v){
        std::cout << s << " ";
        word_count ++;
        if(word_count == 8){
            word_count = 0;
            std::cout << std::endl; 
        }
    }
    return 0;
}