#include <iostream>
#include <string>
int main()
{
    std::string s, sum;
//    std::cout << "Enter an entire row: " << std::endl;
//    while ( getline(std::cin, s) )
//    {
//	std::cout << s << std::endl;
//    }
    std::cout << "Enter some words: " << std::endl;
//    s = "";
//    sum = "";
    while ( std::cin >> s )
    {
	std::cout << s << std::endl;
    }
    return 0;
}
