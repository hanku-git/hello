#include <iostream>

int func1(int a)
{
    return a;
}

int func2(int a)
{
    return a;
}

int main() 
{
    int f1;
    
    std::cout << "Hello, World!" << std::endl;

    f1 = func1(1);
    f1 = func2(1);
        
    return 0;
}
