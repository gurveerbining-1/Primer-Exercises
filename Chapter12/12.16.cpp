#include <memory>
#include <iostream>
#include <string>

int main(){
	// below are some incorrect ways to copy or assign a unique_ptr
	std::unique_ptr<int> p = std::make_unique(10);
	std::cout << p << "\n";
       	std::unique_ptr<int> s = p; // using direct copy initalization is wrong
	std::shared_ptr<int> q = p; // can't convert from unique_ptr to shared_ptr
	std::unique_ptr<int> p2(p.get()); // p and p2 both think they own the same pointer  	
	return 0;
}
