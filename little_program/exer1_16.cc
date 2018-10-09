#include <iostream>
int main()
{
    int input = 0;
    int sum = 0;
    std::cout << "Please input a set of numbers:" << std::endl;
    while ( std::cin >> input )
    {
        sum += input;
    }
    std::cout << "The sum of inputted numbers is " << sum << std::endl;
    return 0;
}
