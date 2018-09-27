#include <iostream>
int main()
{
    std::cout << "Here comes the sum from 50 to 100:" << std::endl;
    int i = 50;
    int j = 100;
    int sum =0;
    while ( i <= j )
    {
        sum += i;
        i++;
    }
    std::cout << sum << std::endl;
}
