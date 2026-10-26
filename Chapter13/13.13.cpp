/*
Add the copy-assignment operator and destructor to X and write a program using X
objects in various ways: Pass them as nonreference and reference parameters; dynamically allocate them; put them in containers; and so forth. Study the output until you
are certain you understand when and why each copy-control member is used. As you
read the output, remember that the compiler can omit calls to the copy constructor.
*/
#include <iostream>

struct X {
	X() {std::cout << "X()" << std::endl;}
	~X() {std::cout << "~X()" << std::endl;}
	X(const X&) {std::cout << "X(const X&)" << std::endl;}
	X& operator=(const X&) {std::cout << "X& operator=" << std::endl; return *this;}
};

int main(){
	X x;
	X y = x;
	X* xx = &y;
	X* g = new X(y);
	delete g;

	return 0;
}


