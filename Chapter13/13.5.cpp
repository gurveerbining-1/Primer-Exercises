/*Given the following sketch of a class, write a copy constructor that
copies all the members. Your constructor should dynamically allocate a new string
(§ 12.1.2, p. 458) and copy the object to which ps points, rather than copying ps itself. 
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
    private:
        std::string *ps;
        int i;
};