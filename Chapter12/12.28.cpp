/*
Write a program to implement text queries without defining classes to
manage the data. Your program should take a file and interact with a user to query for
words in that file. Use vector, map, and set containers to hold the data for the file
and to generate the results for the queries.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>

int main(){

    std::ifstream file("12.27.txt");
    if(!file.is_open()){
        std::cout << "Error cannot open file" << "\n";
        return -1;
    }

    std::string line;

    std::vector<std::string> file_data;
    
    while(std::getline(file, line)){
        file_data.push_back(line);
    }
    file.close();
    
    // at this point the file has been read into the vector
    // need to search this data for the query that the user provided
    // and store the results into the map and set
    
    std::string query;
    std::cout << "Enter a query: " << "\n";
    std::cin >> query;
    std::map<std::string, std::set<int>> map; 

    int line_count = 1;
    for(auto line : file_data){
        std::istringstream line_stream(line);

        std::string word;
        while (line_stream >> word) {
            // one word at a time
            map[word].insert(line_count);
        }

        line_count++;   
    }

    auto result = map.find(query);
    if(result == map.end()){
        std::cout << "Word not found\n";
    }
    else{
        std::cout << result->first << " appears on lines:\n";
        
        for(auto line_num : result->second){
            // retrieve lines from vector using line_num
            std::cout << line_num << " : ";
            std::cout << file_data[line_num - 1] << "\n";

        }

    }

    return 0;
}