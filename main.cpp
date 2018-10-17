/**
* File: is_an_A.cpp
* Dev: Matthew Herrera
* Email: herreram81266@student.vvc.edu
* Date: Tue Oct 16 18:38:07 PDT 2018
* Description: Accepts a string input from user, checks string for instances of 'a' or 'A'.
**/

#include<iostream>
#include<string>

using namespace std;

int is_letter(string a);

int main()
{
    string test;

    cout << "Enter a string: ";
    getline(cin, test);
    cout << is_letter(test) << endl;

    return 0;
}

/**
Iterates through a string and counts instances of A's (or a's)
@param a string to test
@return count number of instances of letter a
**/
int is_letter(string a)
{
    int count = 0;

    for(int i = 0; i < a.length(); i++)
    {
        if(a.at(i) == 'a' || a.at(i)  == 'A')
        {
           count++;
        }
       
    }
    return count;
}
