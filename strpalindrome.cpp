#include<iostream>
#include<cstring>
using namespace std;

// A recursive function that check a str[s..e]
// is palindrome or not.
bool isPalRec(string str, int s, int e)
{
    // If there is only one character
    if (s == e)
       return true;

    // If first and last characters do not match
    if (str[s] != str[e])
       return false;

    // If there are more than two characters,
    // check if middle substring is also
    // palindrome or not.
    if (s < e+1)
       return isPalRec(str, s+1, e-1);

    return true;
}

bool isPalindrome(string str)
{
   int n = str.length();

   // An empty string is considered as
   // palindrome
   if (n == 0)
     return true;

   return isPalRec(str, 0, n-1);
}

// Main Function
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    if (isPalindrome(str))
       cout<<"\nYes,given string is palindrome";
    else
       cout<<"\nNo,given string is not palindrome";

    return 0;
}
