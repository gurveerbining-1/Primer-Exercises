/*
Exercise 3.14: Write a program to read a sequence of ints from cin and store those
values in a vector.
*/
#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int temp;
    
    while(std::cin >> temp){
        v.push_back(temp);
    } 

    for(const auto &x : v){
        std::cout << x << std::endl;
    }

    return 0;
}