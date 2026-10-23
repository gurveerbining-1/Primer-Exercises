/*
Add a destructor to your HasPtr class from the previous exercises.
 * */

#include <string>

class HasPtr {
    public:
        HasPtr(const HasPtr& h){
            ps = new std::string(*h.ps); // dynamically allocated string
            i = h.i;
        }
	~HasPtr(){
		delete ps;
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
};⏎                                                 
