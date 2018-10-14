#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::cin;
using std::string;

int main()
{
    vector<string> svec;
    string temp;
    cout << "Enter a series of string: " << endl;
    while( cin >> temp )
    {
	svec.push_back(temp);
    }
    cout << "The size of result vector is " << svec.size() << endl;
    cout << "The contain of result vector is: " << endl;
    for( vector<string>::size_type loop = 0; loop < svec.size(); ++loop )
    {
	cout << svec[loop] << "\t";
    }
    cout <<endl;
    return 0;
}
