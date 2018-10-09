#include <iostream>
#include <vector>
#include "Sales_item.h"
int main()
{
    Sales_item previous, current;
    int count = 1;
    if (std::cin >> previous)
    {
        while ( std::cin >> current)
        {
            if( current.isbn() == previous.isbn() )
            {
               ++count;
               previous += current;
            }
            else 
            {
                std::cout << "The sum of book " << previous.isbn() << " is " << previous << std::endl;
                std::cout << "There are " << count << " in total." << std::endl;
                previous = current;
                count =1;
            }
        }
            std::cout << "The sum of book " << previous.isbn() << " is " << previous << std::endl;
            std::cout << "There are " << count << " in total." << std::endl;
    }
    else
    {
        std::cerr << "No input" << std::endl;
        return -1;
    }
    return 0;
}
