#include <iostream>
#include <array>
#include <string>
#include <algorithm>

int main(){
    
    std::array<std::string, 8> arr;  
    std::array<std::string, 8> arr2;
    
    arr.fill("sangi");
    
    for(int i=0; i<arr.size(); i++){
        std::cout << arr.at(i) << std::endl;
        std::cout << arr[i] << std::endl;
        std::cout << std::get<0>(arr) << std::endl;
    }
    
    std::cout << arr.max_size() << std::endl;
    
    std::cout << *(arr.data() + 3) << std::endl;
    
    std::cout << arr.front() << std::endl;
    std::cout << arr.back() << std::endl;
    std::cout << arr.empty() << std::endl;
    
    arr.swap(arr2);
    std::cout << arr.size() << std::endl;
    for(auto value: arr){
        std::cout << value << std::endl;
    }
    
    return 0;
}