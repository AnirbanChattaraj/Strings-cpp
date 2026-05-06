//Remove Spaces
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str = "hello world";

    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    cout << str;
}