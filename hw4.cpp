#include <iostream>

using namespace std;

int main()
{
    //Task 1
    cout << "Please enter something:" << endl;
    string something;
    cin >> something;
    string working;
    for(int i=something.length()-1; i>=0; i--)
    {
        working+=something.substr(i,1);
    }
    cout << working << endl;

    //Task 2
    

    return 0;
}