#include <iostream>

int sub(int a, int b)
{
    return a-b;
}

int add(int a, int b)
{
    return a+b;
}


int main() 
{
    int add_test = 0;
    int sub_test = 0;
    int  mul_test = 0;
    
    std::cout << "Hello, World!" << std::endl;

    add_test = add(1,2);
    sub_test = sub(2,1);
    
    return 0;
}
