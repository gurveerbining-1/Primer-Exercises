#include <iostream>
#include <random>

/*
Write versions of numbered and f corresponding to the previous
three exercises and check whether you correctly predicted the output.
*/

/* 13.14
class numbered{

	public:
		numbered() : mysn(0) {}
		int mysn;
};

void f (numbered s) { std::cout << s.mysn << std::endl; }

int main(){
	numbered a, b = a, c = b;
	f(a);
	f(b);
	f(c);
	return 0;
}*/

/* 13.15
class numbered{                                                                                          
                                                                                                         
        public:                                                                                          
                numbered() : mysn(0) {}                                                                  
                numbered(const numbered& num){
			std::random_device rd;

			std::mt19937 gen(rd());

			std::uniform_int_distribution<> distr(1, 50);

			mysn = distr(gen);
			
		}                                                         
                int mysn;                                                                                
};                                                                                                       
                                                                                                         
void f (numbered s) { std::cout << s.mysn << std::endl; }                                                
                                                                                                         
int main(){                                                                                              
        numbered a, b = a, c = b;    
	std::cout << a.mysn << ", " << b.mysn << ", " << c.mysn << '\n';
        f(a);                                                                                            
        f(b);                                                                                            
        f(c);                                                                                            
        return 0;                                                                                        
}   
*/

// 13.16
class numbered{                                                                                          
                                                                                                         
        public:                                                                                          
                numbered() : mysn(0) {}                                                                  
                numbered(const numbered& num){                                                           
                        std::random_device rd;                                                           
                                                                                                         
                        std::mt19937 gen(rd());                                                          
                                                                                                         
                        std::uniform_int_distribution<> distr(1, 50);                                    
                                                                                                         
                        mysn = distr(gen);                                                               
                                                                                                         
                }                                                                                        
                int mysn;                                                                                
};                                                                                                       
                                                                                                         
void f (const numbered& s) { std::cout << s.mysn << std::endl; }                                                
                                                                                                         
int main(){                                                                                              
        numbered a, b = a, c = b;                                                                        
        std::cout << a.mysn << ", " << b.mysn << ", " << c.mysn << '\n';                                 
        f(a);                                                                                            
        f(b);                                                                                            
        f(c);                                                                                            
        return 0;                                                                                        
}
