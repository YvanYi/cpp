#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;


int main()
{
    vector<int> result;
    int temp;
    cout << "Enter a series of integer numbers:" << endl;
    while( cin >> temp )
    {
	result.push_back(temp);
    }
    cout << "The size of result vector is " << result.size() << endl;
    cout << "The containt of result vector is: " << endl;
    for (vector<int>::size_type loop = 0; loop < result.size(); ++loop)
    {
	cout << result[loop] << "\t";
    }
    cout << endl;
    return 0;
}
