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
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    cout << "Here comes the result: " << endl;
    cout << endl;

    cout << "The size is " << v1.size() << endl;
    cout << "The content is: " << endl;
    for( auto i : v1 )
    {
        cout << i << "\t"; 
    }
    cout << endl;

    cout << "The size is " << v2.size() << endl;
    cout << "The content is: " << endl;
    for( auto i : v2 )
    {
        cout << i << "\t"; 
    }
    cout << endl;

    cout << "The size is " << v3.size() << endl;
    cout << "The content is: " << endl;
    for( auto i : v3 )
    {
        cout << i << "\t"; 
    }
    cout << endl;

    cout << "The size is " << v4.size() << endl;
    cout << "The content is: " << endl;
    for( auto i : v4 )
    {
        cout << i << "\t"; 
    }
    cout << endl;

    cout << "The size is " << v5.size() << endl;
    cout << "The content is: " << endl;
    for( auto i : v5 )
    {
        cout << i << "\t"; 
    }
    cout << endl;

    cout << "The size is " << v6.size() << endl;
    cout << "The content is: " << endl;
    for( auto i : v6 )
    {
        cout << i << "\t"; 
    }
    cout << endl;

    cout << "The size is " << v7.size() << endl;
    cout << "The content is: " << endl;
    for( auto i : v7 )
    {
        cout << i << "\t"; 
    }
    cout << endl;

    return 0;
}

