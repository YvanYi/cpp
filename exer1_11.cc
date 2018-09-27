#include <iostream>
int main()
{
    std::cout << "Please input two numbers: " << std::endl;
    int i = 0, j = 0;
    std::cin >> i >> j;
    std::cout << "Here comes the number between " << i << " and " << j << std::endl;
    i < j ? j--:i--;
    while ( i != j)
    {
        if ( i < j )
        {
            std::cout << ++i << std::endl;
        }
        else
        {
            std::cout << ++j << std::endl;
        }
    }
    return 0;
}

