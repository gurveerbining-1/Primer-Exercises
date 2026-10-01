/*
Write a program that reads a string from the standard input into a
dynamically allocated character array. Describe how your program handles varying
size inputs. Test your program by giving it a string of data that is longer than the array
size you’ve allocated.

If the input is larger than the amount of memory allocated for the character array, writing the additional characters past the end of the array 
results in undefined behavior. This does not necessarily produce a compilation error because the compiler cannot know how large the input will be at runtime.
The std::string safely stores the input, but the dynamically allocated char array has its own fixed size.

To handle varying input sizes, I allocate the character array based on the size of the input string. I allocate n + 1 characters,
where n is the length of the input, so that there is enough space for every character in the string plus the null terminator. 
This allows the entire input to be stored without writing past the end of the allocated memory.*/

#include <iostream>
#include <string>

int main(){
    std::string line; 
    std::getline(std::cin, line);
    int n = line.size();
    char* arr = new char[n + 1]; // stores n characters + null terminator    


    int i = 0;
    for(auto character : line){
        arr[i] = character;
        ++i;
    }
    arr[i] = '\0';

    std::cout << arr << "\n";

    delete [] arr;

    return 0;
}
