#include <iostream>
using namespace std;
int main(){

/*
input:kBtU
output:KbTu
*/


string s;
cin>>s;

for(int i=0; i<s.size(); i++){
int code=(int)s[i];
if(code>=97&&code<=122)
code-=32;

else if(code>=65&&code<=90)
code+=32;
cout<<(char)code;
}






    return 0;
}