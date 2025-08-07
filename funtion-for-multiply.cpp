# include <iostream>

int mul_function(int a,int b){
    int res = a * b;
    return res;
}

int main(){
    int value = mul_function(3,2);
    std::cout << "result = " << value << std::endl;
}