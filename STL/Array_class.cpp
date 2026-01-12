#include <iostream>
#include <array>
#include <string>
#include <algorithm>

int main(){
    
    std::array<std::string, 5> arr;
    std::array<std::string, 5> arr2;
    // std::array<const std::string, 5> arr3;

    arr.fill("sangi");
    arr2.fill("roopa");
    // arr3.fill("roopa");
    // if(arr3 == arr2){std::cout << "arra2 and arra3 are equal";}

    std::cout << arr.size() << std::endl;
    std::cout << arr.max_size() << std::endl;

    std::cout << arr.front() << std::endl;
    std::cout << arr.back() << std::endl;
    std::cout << *(arr.data() + 2) << std::endl;

    arr.swap(arr2);

    int i=0;
    while (!arr2.empty())
    {
        std::cout << arr2.at(i) << std::endl;
        i++;
    }

    for(auto it=arr2.begin(); it!=arr2.end(); it++){
        std::cout << *it << std::endl;
    }
    for(auto it=arr2.rbegin(); it!=arr2.rend(); it++){
        std::cout << *it << std::endl;
    }
    // for(auto it=arr3.cbegin(); it!=arr3.cend(); it++){
    //     std::cout << *it << std::endl;
    // }
    // for(auto it=arr3.crbegin(); it!=arr3.crend(); it++){
    //     std::cout << *it << std::endl;
    // }

    
    
    return 0;
}