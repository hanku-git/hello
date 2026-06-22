#include <iostream>

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}


int main() 
{
    int total = 0;
    int sub_test = 0;
    std::cout << "Hello, World!" << std::endl;

    total = add(1,2);
    sub_test = sub(2,1);
    
    return 0;
}
