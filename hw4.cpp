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

    //Task 4
    cout << "Input a password:" << endl;
    string pw;
    getline(cin, pw);
    bool length = false;
    bool upper = false;
    bool lower = false;
    if (pw.length()>=8)
    {
        length = true;
    }
     int upperct=0;
    for(int i=0; i<pw.length(); i++)
    {
        char temp = pw[i];
        if((int)temp>=65&&(int)temp<=90)
        {
            upperct++;
        }
    }
    if (upperct>0)
    {
        upper = true;
    }
    int lowerct=0;
    for(int i=0; i<pw.length(); i++)
    {
        char temp = pw[i];
        if((int)temp>=97&&(int)temp<=122)
        {
            lowerct++;
        }
    }
    if (lowerct>0)
    {
        lower = true;
    }
    if (length && upper && lower)
    {
        cout << "Password is valid." << endl;
    }
    if (!length)
    {
        cout << "The password is too short." << endl;
    }
    if (!upper)
    {
        cout << "The password needs an uppercase character." << endl;
    }
    if (!lower)
    {
        cout << "The password needs a lowercase character." << endl;
    }

    return 0;
}