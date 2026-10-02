/*Rewrite the program on page 481 using an allocator*/

#include <iostream>
#include <memory>

int main(){
	
	std::size_t n;
	std::cin >> n;

	std::allocator<std::string> alloc;
	std::string *const p = alloc.allocate(n);
	std::string s;
	std::string *q = p; 
	while (std::cin >> s && q != p + n)
		std::allocator_traits<decltype(alloc)>::construct(alloc, q++, s);
	const std::size_t size = q - p; 

	for (std::string *r = p; r != q; ++r)
    		std::cout << *r << '\n';	
	
	while(q != p){
		std::allocator_traits<decltype(alloc)>::destroy(alloc, --q);
	}
	
	alloc.deallocate(p, n);
	return 0;
}
