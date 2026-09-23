/*
Write a function that returns a dynamically allocated vector of ints.
Pass that vector to another function that reads the standard input to give values to
the elements. Pass the vector to another function to print the values that were read.
Remember to delete the vector at the appropriate time.
*/
#include <iostream>
#include <string>
#include <vector>
#include <memory>

std::vector<int>* dynamic_vec(){
    return new std::vector<int>();
}

void assign_elements(std::vector<int>* vec){
    for(uint8_t i = 0; i < 15; i++){
        vec->push_back(i);
    }
}

void print_vec(std::vector<int>* vec){
    for(auto x : *vec){
        std::cout << x << "\n";
    }
}

int main(){
    std::vector<int>* v = dynamic_vec();
    assign_elements(v);
    print_vec(v);

    // free memory and reassign v to nullptr to prevent dangling pointers if accessed again
    delete v;
    v = nullptr;

    return 0;
}