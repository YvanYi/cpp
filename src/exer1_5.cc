#include <iostream>
int main()
{
    std::cout << "Please input two numbers:" << std::endl;
    int i=0, j=0;
    std::cin >> i;
    std::cin >> j;
    std::cout << "The result of ";
    std::cout << i;
    std::cout << " and ";
    std::cout << j;
    std::cout << " is ";
    std::cout << i*j;
    std::cout << std::endl;
    return 0;
} 
