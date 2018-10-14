#include <vector>

using std::vector;


int main()
{
    vector<int> ivec(10, 42);
    vector<int> i2vec{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> i3vec;
    for( vector<int>::size_type temp; temp < 10; ++temp )
    {
	i3vec.push_back(42);
    }
    return 0;
}
