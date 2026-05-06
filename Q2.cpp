//String Length
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string:";
    getline(cin,str);
    int length=0;
    while (str[length] !='\0')
    {
        length++;
    }
    cout<<length;
}