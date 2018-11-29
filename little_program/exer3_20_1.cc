#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

#define INPUTSIZE 10

int main() {
    vector<int> inputVec;
    vector<int> outputVec;
    int temp;
    cout << "Please input 10 integer number: " << endl;
    while( cin >> temp ){
        inputVec.push_back(temp);
    }
    if( inputVec.size() < INPUTSIZE ){
        cout << "The input number is less than 10, bad inpur" << endl;
        return 1;
    }
    for( vector<int>::size_type loop = 0; loop < INPUTSIZE-1-loop; ++loop){
        outputVec.push_back(inputVec[loop] + inputVec[INPUTSIZE-1-loop]);
    }
    for (auto i : outputVec){
        cout << i << "\t";
    }
    cout << endl;
    return 0;
}


