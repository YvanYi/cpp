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
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<string> v5{10};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};

    vector<vector<int>> intGroupVec{v1, v2, v3, v4};
    for( auto it= intGroupVec.cbegin(); it != intGroupVec.cend(); ++it)
    {
        cout << " Now print a int vector, size " << it->size() << endl;
        for(auto itInFor= it->cbegin(); itInFor != it->cend(); ++itInFor )
        {
            cout << *itInFor << endl;
        }
    }
    vector<vector<string>> stringGroupVec{v5, v6, v7};
    for(auto it= stringGroupVec.cbegin(); it != stringGroupVec.cend(); ++it )
    {
        cout << " Now print a string vector, size " << it->size() << endl;
        for(auto itInFor= it->cbegin(); itInFor != it->cend(); ++itInFor )
        {
            cout << *itInFor << endl;
        }
    }
    return 0;
}
