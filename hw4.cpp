#include <iostream>

using namespace std;

int main()
{
    //Task 1
    cout << "Please enter a word:" << endl;
    string something;
    getline(cin, something);
    string working;

    //add the chars in something to working in reverse order
    for(int i=something.length()-1; i>=0; i--)
    {
        working+=something.substr(i,1);
    }

    cout << working << endl;


    cout << endl;


    //Task 2
    cout << "Please enter a sentence:" << endl;
    string sentence;
    getline(cin,sentence);
    int count=0;

    //check for vowels
    for(int i=0; i<sentence.length(); i++)
    {
        char temp = sentence[i];
        if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u'||temp=='A'||temp=='E'||temp=='I'||temp=='O'||temp=='U')
        {
            count++;
        }
    }

    cout << "This has " << count << " vowels." << endl;


    cout << endl;


    //Task 3
    cout << "Please enter a word:" << endl;
    string word;
    getline(cin, word);
    string uppercase;

    //check for lowercase characters and capitalize them
    for(int i=0; i<word.length(); i++)
    {
        char temp = word[i];
        if((int)temp>=97&&(int)temp<=122)
        {
            temp=char((int)temp-32);
        }
        uppercase+=temp;
    }

    cout << uppercase << endl;


    cout << endl;


    //Task 4
    bool length = false;
    bool upper = false;
    bool lower = false;
    bool good = false;

    do 
    {
        cout << "Input a password:" << endl;
        string pw;
        getline(cin, pw);
        //check if the password is at least 8 characters long
        if (pw.length()>=8)
        {
            length = true;
        }
        if(length)
        {
            //check if there is at least one uppercase and one lowercase character in the password
            int upperct=0;
            int lowerct=0;
            for(int i=0; i<pw.length(); i++)
            {
                char temp = pw[i];
                if((int)temp>=65&&(int)temp<=90)
                {
                    upperct++;
                }
                else if((int)temp>=97&&(int)temp<=122)
                {
                    lowerct++;
                }
            }
            if (upperct>0)
            {
                upper = true;
            }
            if (lowerct>0)
            {
                lower = true;
            }
        }

        //inform the user if their password is valid, otherwise state the issue
        if (length && upper && lower)
        {
            cout << "Password is valid." << endl;
            good = true;
        }
        else
        {
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
        }
    }while (!good);


    cout << endl;



    //Bonus Task
    cout << "Please enter a sentence: " << endl;
    string senten;
    getline(cin, senten);
    string out;

    //capitalize the first character
    if ((int)senten[0]>=97&&(int)senten[0]<=122)
    {
        out+=char((int)senten[0]-32);
    }
    else 
    {
        out+=senten[0];
    }

    //capitalize all characters after spaces
    for (int i=0; i<senten.length()-1;i++)
    {
        if (senten[i]==' '&& (int)senten[i+1]>=97&&(int)senten[i+1]<=122)
        {
            out+=char((int)senten[i+1]-32);
        }  
        else 
        {
            out+=senten[i+1];
        } 
    }

    cout << "The first letter of each word has been capitalized: " << out << endl;

    return 0;
}