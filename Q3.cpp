//Count Vowels
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string:";
    getline(cin,str);
    int length = 0;
    int vowel = 0;
    while (str[length] != '\0') {
        if (str[length]=='a' || str[length]=='e' || 
            str[length]=='i' || str[length]=='o' || 
            str[length]=='u' || str[length]=='A' || 
            str[length]=='E' || str[length]=='I' || 
            str[length]=='O' || str[length]=='U') {
            vowel++;
        }
        length++; 
    }
    cout << vowel;
}