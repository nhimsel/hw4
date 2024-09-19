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
    cout << "Please enter a sentence:" << endl;
    string sentence;
    getline(cin,sentence);
    int count=0;
    for(int i=0; i<sentence.length(); i++)
    {
        char temp = sentence[i];
        if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u'||temp=='A'||temp=='E'||temp=='I'||temp=='O'||temp=='U')
        {
            count++;
        }
    }
    cout << "This has " << count << " vowels." << endl;


    //Task 3
    cout << "Please enter a word:" << endl;
    string word;
    getline(cin, word);
    string lowercase;
    for(int i=0; i<word.length(); i++)
    {
        char temp = word[i];
        if((int)temp>=97&&(int)temp<=122)
        {
            temp=char((int)temp-32);
        }
        lowercase+=temp;
    }
    cout << lowercase << endl;

    return 0;
}