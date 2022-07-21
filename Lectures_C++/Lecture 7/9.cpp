#include <iostream>
using namespace std;
int main(){

string s;
cin>>s;

for(int i=0; i<s.size(); i++){
    int a=int(s[i])-int('0');
   cout<<a+5;
}




    return 0;
}