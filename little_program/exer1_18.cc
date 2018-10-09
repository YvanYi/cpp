#include <iostream>
int main()
{
    std::cout << "Please input a set of numbers:" << std::endl;
    int current = 0, count = 0, next = 0;
    if( std::cin >> current )
    {
        count = 1;
        while( std::cin >> next )
        {
            if( next == current )
            {
                ++count;
            }
            else
            {
                std::cout << "The number " << current << " continously occurs " << count << " times." << std::endl;
                current = next;
                count = 1;
            }
        }
        std::cout << "The number " << current << " continously occurs " << count << " times." << std::endl;
    }
    else 
    {
        std::cout << "Wront input, exit now." << std::endl;
    }
    return 0;
}
