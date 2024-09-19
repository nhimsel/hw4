#include <iostream>

using namespace std;

int main()
{
    //Task 1
    cout << "Please enter a word:" << endl;
    string something;
    getline(cin, something);
    string working;
    for(int i=something.length()-1; i>=0; i--)
    {
        working+=something.substr(i,1);
    }
    cout << working << endl;


    //Task 2
    cout << "\n Please enter a sentence:" << endl;
    string sentence;
    getline(cin,sentence);
    int count=0;
    for(int i=0; i<sentence.length(); i++)
    {
        string temp = sentence.substr(i,1);
        if(temp=="a"||temp=="e"||temp=="i"||temp=="o"||temp=="u"||temp=="A"||temp=="E"||temp=="I"||temp=="O"||temp=="U")
        {
            count++;
        }
    }
    cout << "This has " << count << " vowels.";

    return 0;
}