#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;


int main()
{
    vector<string> test{"this", "is", "a", "test", "txt.", "", "add ", "some suffixes"};
    for( auto it = test.begin(); it != test.end() && !it->empty(); ++it )
    {
        for( auto itInFor = it->begin(); itInFor != it->end(); ++itInFor )
        {
            if( isalpha(*itInFor) )
            {
                *itInFor = toupper(*itInFor);
            }
        }
    }
    for( auto i : test )
    {
        cout << i << endl;
    }
    return 0;
}
