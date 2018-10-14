#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
    string a, b;
    cout << "Enter two strings: " << endl;
    cin >> a;
    cin >> b;
    if ( a == b )
    {
	cout << "They are equal" << endl;
    }
    else
    {
	a > b ? cout << a << endl : cout << b << endl;
    }
    return 0;
}
