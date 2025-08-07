#include <iostream>
// funtion defenition
int addNumbers(int first_param, int second_param){
    int result = first_param+second_param;
    return result;
}

int main(){
    int first_number {3}; // statement
    int second_number {7};

    std::cout << "first number" << first_number <<std::endl;
    std::cout << "second number" << second_number <<std::endl;
    
    int sum = first_number+second_number;
    std::cout << "sum: " << sum <<std::endl; // 10

    //function call
    sum = addNumbers(4,16);
    std::cout << "function sum: " << sum <<std::endl; // 20


    // reusing the function 
    sum = addNumbers(5,1);
    std::cout << "function sum: " << sum <<std::endl; // 6

    // calling funtion in the print funtion 
    std::cout << "sum 3 + 4 = " << addNumbers(3,4) << std::endl;

    return 0;

}