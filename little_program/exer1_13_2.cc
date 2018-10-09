#include <iostream>
int main()
{
    std::cout << "Please input two numbers" << std::endl;
    int i =0, j = 0;
    std::cin >> i >> j;
    i < j ? j--: i--;
    std::cout << "Here comes the numbers between them:" << std::endl;
    for (; i != j; )
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
