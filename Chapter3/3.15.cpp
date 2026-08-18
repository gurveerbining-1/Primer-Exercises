/*
Exercise 3.15: Repeat the previous program but read strings this time
*/
#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> v;
    std::string temp;
    
    while(std::cin >> temp){
        v.push_back(temp);
    } 

    for(const auto &x : v){
        std::cout << x << std::endl;
    }

    return 0;
}