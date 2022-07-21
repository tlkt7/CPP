#include <iostream>
using namespace std;
int main(){

/*
input: kbtu
output: KBTU
*/



string s;
cin>>s;

for(int i=0; i<s.size(); i++){
int code=(int)s[i];
if(code>=97&&code<=122)
code-=32;
cout<<(char)code;
}






    return 0;
}