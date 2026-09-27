/*Write a program that reads an input file a line at a time into a StrBlob
and uses a StrBlobPtr to print each element in that StrBlob. */

#include "12.19.cpp"

int main(){
    StrBlob blob;
    std::string line;
    while(std::getline(std::cin, line)){
        blob.push_back(line);
    }

    StrBlobPtr p = blob.begin();
    for(int i = 0; i < blob.size(); i++){
        std::cout << p.deref() << "\n";
        p.incr();
    }
    return 0;
}