#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    cout << "Please input two numbers: " << endl;
    int a;
    int b;
    int temp;
    cin >> a;
    cin >> b;
    if ( a > b  )
    {
	temp = a;
	a = b;
	b = temp;
    }
    if ( b - a == 1 )
    {
	cout << "There is no number between " << a << " and " << b << endl;
	return -1;
    }
    else
    {
	for ( temp = a+1; temp < b; ++temp )
	{
	    cout << temp << endl;
	}
    }
    return 0;
}
