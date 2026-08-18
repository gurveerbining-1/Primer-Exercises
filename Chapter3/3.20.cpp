/*
Exercise 3.20: Read a set of integers into a vector. Print the sum of each pair of
adjacent elements. Change your program so that it prints the sum of the first and last
elements, followed by the sum of the second and second-to-last, and so on
*/

#include <vector>
#include <iostream>

int main(){
    std::vector<int> v;
    int n;
    // read integers into vector
    while(std::cin >> n){
        v.push_back(n);
        //std::cout << n << std::endl;
    }
    
    if(v.empty()){
        return 0;
    }

    int adj_sum = 0;
    for(int i = 0; i < v.size() - 1; i++){
        adj_sum = v[i] + v[i + 1];
        std::cout << adj_sum << " ";
    }   
    std::cout << "\n";
    // sum of the first and last elements, followed by the sum of the second and second-to-last, and so on
    int left = 0;
    int right = v.size() - 1;
    int mirror_sum = 0;

    while(left < right){
        // two pointer approach
        mirror_sum = v[left] + v[right];
        left++;
        right--;
        std::cout << mirror_sum << " ";
    }
    return 0;
}