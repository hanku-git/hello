#include <iostream>

int robot(int in)
{
    return in+10;
}

int main() {
    int tot= 0;
    std::cout << "Hello, World!" << std::endl;

    tot = robot(1);

    return tot;
}
