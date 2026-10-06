/*The TextQuery and QueryResult classes use only capabilities that
we have already covered. Without looking ahead, write your own versions of these
classes. 
*/

#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <set>
#include <map>
class QueryResult; // forward declaration

class TextQuery{
    public:
        TextQuery(std::ifstream&);
        QueryResult query(const std::string&) const;
    private:
        std::shared_ptr<std::vector<std::string>> file;
        std::map<std::string, std::shared_ptr<std::set<int>>> appearances;  // map each word to the set of the lines in which that word appears      
        std::set<int> lines;
};

class QueryResult{
    friend std::ostream& print(std::ostream&, const QueryResult&);
    public:
        QueryResult(std::string s, std::shared_ptr<std::set<int>> p, std::shared_ptr<std::vector<std::string>> f) : word(s), lines(p), file(f){}
    private:
        std::string word;
        std::shared_ptr<std::set<int>> lines;
        std::shared_ptr<std::vector<std::string>> file;
};