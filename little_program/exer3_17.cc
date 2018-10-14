#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;


int main()
{
    vector<string> svec;
    string temp;
    cout << "Enter a series of words: " << endl;
    while( cin >> temp )
    {
	for( auto &i : temp )
	{
	    i = toupper(i);
	}
	svec.push_back(temp);
    }
    cout << "Here comes the convert result: " << endl;
    for( auto j : svec )
    {
	cout << j << endl;
    }
    return 0;
    
}
