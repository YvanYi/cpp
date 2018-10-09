#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item a;
    Sales_item sum;
    for (int i = 0; i < 2; ++i)
    {
        std::cin >> a;
        sum += a;
    }
    std::cout << "here comes the sum of two Sales_item:\n" << sum << std::endl;
    return 0;
}
