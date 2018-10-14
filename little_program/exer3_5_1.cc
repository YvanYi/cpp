#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
    string sum = "";
    string temp = "";
    cout << "Enter some words: " << endl;
    while ( cin >> temp )
    {
	sum += " " + temp;
    }
    cout << "Here comes the result:\n" << sum << endl;
    return 0;
}
