//Palindrome Check
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string:";
    getline(cin,str);
    int size=str.length();
    bool palindrome=true;
    for (int i = 0,j=size-1; i < j; i++,j--)
    {
        if (str[i]!=str[j])
        {
            palindrome=false;
            break;
        }
    }
    if (palindrome)
    {
       cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }

}