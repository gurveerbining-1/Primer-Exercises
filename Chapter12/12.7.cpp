/*
Redo the previous exercise, this time using shared_ptr.
*/
#include <iostream>
#include <string>
#include <vector>
#include <memory>

std::shared_ptr<std::vector<int>> dynamic_vec(){
    return std::make_shared<std::vector<int>>();
}

void assign_elements(std::shared_ptr<std::vector<int>> vec){
    for(uint8_t i = 0; i < 15; i++){
        vec->push_back(i);
    }
}

void print_vec(std::shared_ptr<std::vector<int>> vec){
    for(auto x : *vec){
        std::cout << x << "\n";
    }
}

int main(){
    std::shared_ptr<std::vector<int>> v = dynamic_vec();
    assign_elements(v);
    print_vec(v);

    // no need to free memory for a smart pointer 
    v = nullptr;

    return 0;
}