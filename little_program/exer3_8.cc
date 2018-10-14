#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;


int main()
{
    string input;
    cout << "Enter the input for traditional for loop" << endl;
    getline(cin, input);
    for ( string::size_type i = 0; i < input.size(); i++)
    {
        input[i] = 'X';
    }
    cout << input << endl;
    cout << "Enter the input for while loop" << endl;
    getline(cin, input);
    decltype(input.size()) i = 0;
    while (i != input.size() )
    {
	input[i] = 'X';
	++i;
    }
    cout << input << endl;
    return 0;
}
