/*
Write the assignment operator for the HasPtr class from exercise 13.5
in § 13.1.1 (p. 499). As with the copy constructor, your assignment operator should
copy the object to which ps points.
*/
#include <string>

class HasPtr {
    public:
        HasPtr(const HasPtr& h){
            ps = new std::string(*h.ps); // dynamically allocated string
            i = h.i;
        }
        HasPtr(const std::string &s = std::string()):

        ps(new std::string(s)), i(0) { }

        HasPtr& operator=(const HasPtr& h){
            auto newps = new std::string(*h.ps);
            delete ps;
            ps = newps;
            i = h.i;
            return *this;
        }
    private:
        std::string *ps;
        int i;
};