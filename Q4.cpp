//Reverse a String
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string:";
    getline(cin,str);
    int size=str.length();
    for (int i = 0,j=size-1; i < j; i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    cout<<str;

}