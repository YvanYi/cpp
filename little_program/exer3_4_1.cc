#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
int main()
{
    string a,b;
    cout << "Enter two strings: " << endl;
    cin >> a;
    cin >> b;
    if ( a.size() == b.size() )
    {
	cout << "Their length is equal." << endl;
    }
    else
    {
	a.size() > b.size() ? cout << a.size() << endl : cout << b.size() << endl;
    }
    return 0;
}
