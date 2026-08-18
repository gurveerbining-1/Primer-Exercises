/*
Exercise 3.16: Write a program to print the size and contents of the vectors from
exercise 3.13. Check whether your answers to that exercise were correct. If not, restudy
§ 3.3.1 (p. 97) until you understand why you were wrong.

3.13:
(a) vector<int> v1; (b) vector<int> v2(10);
(c) vector<int> v3(10, 42); (d) vector<int> v4{10};
(e) vector<int> v5{10, 42}; (f) vector<string> v6{10};
(g) vector<string> v7{10, "hi"};

a) v1 has 0 elements
b) v2 has 10 elements all initialized to 0
c) v3 has 10 elements all initialized to 42
d) v4 has 1 element initialized to 10
e) v5 has 2 elements initialized to 10, 42
f) v6 has 10 elements which are all initialized as empty strings
g) v7 has 10 elements all initialized to "hi" 
*/

#include <iostream>
#include <string>
#include <vector>

int main(){

    std::vector<std::string> v{10, "hi"};
    std::cout << " SIZE: " << v.size() << std::endl;
    std::cout << " CONTENTS: " << std::endl; 
    for(auto x : v){
        std::cout << x << std::endl;
    }
    
    return 0;
}