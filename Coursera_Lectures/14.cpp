#include<iostream>
using namespace std;


void AddWorldVersion2(string& s) {
    s += " world";
}

int main(){
string h = "Hello";
AddWorldVersion2(h);
cout << h;
return 0;
}