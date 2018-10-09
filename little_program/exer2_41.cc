#include "Sales_data.h"
int main()
{
    Sales_data total;
    Sales_data trans;
    if( std::cin >> total.bookNo >> total.numSold >> total.price )
    {
	total.revenue = total.numSold * total.price;
	while( std::cin >> trans.bookNo >> trans.numSold >> trans.price )
	{
	    trans.revenue = trans.numSold * trans.price;
	    if( trans.bookNo == total.bookNo )
	    {
		total.numSold += trans.numSold;
		total.revenue += trans.revenue;
	    }
	    else
	    {
		std::cout << "Book " << total.bookNo << " has been sold " << total.numSold
		    << " revenue is " << total.revenue << std::endl;
		total.bookNo = trans.bookNo;
		total.numSold = trans.numSold;
		total.revenue = trans.revenue;
	    }
	}
	std::cout << "Book " << total.bookNo << " has been sold " << total.numSold
	    << " revenue is " << total.revenue << std::endl;
    }
    else
    {
	std::cerr << "Invalid input sales data at the beging." << std::endl;
	return -1;
    }
    return 0;
}
