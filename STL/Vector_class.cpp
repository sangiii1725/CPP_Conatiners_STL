#include <iostream>
#include <vector>
#include <string>

/*
accessors: front(), back(), data(), at(), operator[], 
capacity: size(), max_size(), capacity(), empty(), emplace(args...), reserve(), resize(), shrink_to_fit()
mutators: push_back(), pop_back(), insert(), erase(), clear(), assign(), swap()
*/

int main(){

    std::vector<std::string> vect;

    vect.front() = "sangi";
    vect.at(0) = "sangi";
    vect[1] = "santhu";
    vect.back() = "santhu";

    std::cout << vect.size() << std::endl;
    std::cout << vect.capacity() << std::endl;
    std::cout << vect.max_size() << std::endl;
    std::cout << vect.empty() << std::endl;
    vect.resize(6);
    std::cout << vect.size() << std::endl;
    vect.reserve(10);
    std::cout << vect.size() << std::endl;
    vect.shrink_to_fit();
    std::cout << vect.size() << std::endl;


    return 0;
}