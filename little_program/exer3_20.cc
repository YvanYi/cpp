#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::cin;


int main()
{
    vector<int> inputVec;
    vector<int> outputVec;
    int temp;
    while( cin >> temp )
    {
	inputVec.push_back(temp);
    }
    for( vector<int>::size_type loop = 0; loop < inputVec.size() - 1; loop += 2 )
    {
        outputVec.push_back(inputVec[loop] + inputVec[loop+1]);
    }
    for( auto i : outputVec )
    {
	cout << i << "\t";
    }
    return 0;
}
