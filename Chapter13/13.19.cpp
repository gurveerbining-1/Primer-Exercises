/*                                                                                                       Does your Employee class need to define its own versions of the
copy-control members? If so, why? If not, why not? Implement whatever copy-control
members you think Employee needs.

yes it does need it's own versions of the copy-control members because each employee must have a unique id and the synthesized copy constructor would just copy the id and name from the object that is used for copy initalization.
*/
#include <iostream>
#include <string>

class Employee{                                                                                          
        public:                                                                                          
                Employee() : id(eid++) {}                                                                
                Employee(const std::string& n) : name(n), id(eid++) {}
		Employee(const Employee& e) : name(e.name), id(eid++) {}
		Employee& operator=(const Employee& e){
			if(this != &e){
				name = e.name;
			}
			return *this;
		}
	
        private:                                                                                         
                std::string name;                                                                        
                int id;                                                                                  
                static int eid;                                                                          
};                                                                                                       
                                                                                                         
int Employee::eid = 0;     
