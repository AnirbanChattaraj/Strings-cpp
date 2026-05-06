//Count Words
#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string str = "Hello world from C++";

    stringstream ss(str);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    cout << count;
}