#include <iostream>
#include <string>
#include <vector>

template<typename T>
    class CustomAlloc{
    
        public:
            using size_type = size_t;
            using pointer = T*;
            using const_pointer = const T*;
            using value_type = T;
            
        pointer allocate(size_type n){
            
            std::cout <<"Allocating " << n << " object of " << n*sizeof(value_type) << std::endl;
            
        return reinterpret_cast<pointer>( new char [n*sizeof(value_type)]);
        }
        void deallocate(pointer p, size_type n){
            
            std::cout <<"Deallocating " << n << " object of " << n*sizeof(value_type) << std::endl;
            
            delete [] reinterpret_cast<char *>(p);
        }
        
    };


int main(){
    
    std::string s;
    std::allocator<int> a;
    
    std::vector<int, CustomAlloc<int>> v;
    
    v.push_back(42);
    v.push_back(42);
    v.push_back(46);

    return 0;
}
