#include <iostream>
int main()
{
    std::cout << "Here comes the sum from 50 to 100" << std::endl;
    int i = 50, j = 100;
    int sum = 0;
    for (; i <= j; i++ )
    {
        sum += i;
    } 
    std::cout << sum << std::endl;
    return 0;
}
