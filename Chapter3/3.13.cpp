#include <iostream>
#include <string>
#include <vector>

int main(){

    std::vector<std::string> v{10};
    
    for(auto x : v){
        std::cout << x << std::endl;
    }
    
    return 0;
}