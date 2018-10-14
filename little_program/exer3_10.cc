#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;


int main()
{
    string input = "";
    string output = "";
    cout << "Enter a string contains punctuation." << endl;
    getline( cin, input );
    for (auto &temp : input)
    {
	if( !ispunct(temp) )
	{
	    output += temp;
	}
    }
    cout << output << endl;
    return 0;
}
