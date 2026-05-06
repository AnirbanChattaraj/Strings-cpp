//Frequency of Characters
#include<iostream>
using namespace std;
int main(){
    string str = "hello";

    int freq[256] = {0}; // for all ASCII characters

    for(int i = 0; i < str.length(); i++){
        freq[str[i]]++;
    }

    for(int i = 0; i < 256; i++){
        if(freq[i] > 0){
            cout << char(i) << " : " << freq[i] << endl;
        }
    }
}