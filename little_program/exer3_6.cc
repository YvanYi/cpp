#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;


int main()
{
    string input;
    cin >> input;
    for ( auto &temp : input )
    {
        temp = 'X';
    }
    cout << input << endl;
    return 0;
}
