#include <iostream>
#include <string>

int main(){
    /*
    // printing data
    std::cout << "hello rithika " << std::endl;
    int age{20};
    std::cout << "age: " << age << std::endl;

    // printing error message
    std::cerr << "error message: something wrong" << std::endl;
    // printing a log message
    std::clog << "log message: something happend" << std::endl;
    
    int age1;
    std::string name;
    std::cout << "enter your name and age " << std::endl;
    
    // taking inputs from the user
    //std::cin >> name;
    //std::cin >> age1;
    std::cin >> name >> age1;

    // printing the info 
    std::cout << "hello, your name is " << name << " and age is " << age1 << std::endl;
    */

    // data with spaces
    std::string full_name;
    int age2;

    std::cout << "enter your name and age " << std::endl;
    std::getline(std::cin,full_name);
    std::cin >> age2;
    std::cout << "hello, your name is " << full_name << " and age is " << age2 << std::endl;



    return 0;
}
