#include <iostream>
#include <vector>
#include "Sales_item.h"
int main()
{
    Sales_item previous, current;
    if (std::cin >> previous)
    {
        while ( std::cin >> current)
        {
            if ( current.isbn() == previous.isbn() )
            {
                previous += current;
            }
            else
            {
                std::cout << "The sum of book " << previous.isbn() << " is " << previous << std::endl; 
                previous = current;
            }
        }
        std::cout << "The sum of book " << previous.isbn() << " is " << previous << std::endl;
    }
    else
    {
        std::cerr << "No input" << std::endl;
        return -1;
    }
    return 0;
}




