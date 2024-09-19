#include <iostream>

using namespace std;

int main()
{
    //Task 1
    string test="this is a test string";
    string working;
    for(int i=test.length()-1; i>=0; i--)
    {
        working+=test.substr(i,1);
    }
    cout << working << endl;

    return 0;
}