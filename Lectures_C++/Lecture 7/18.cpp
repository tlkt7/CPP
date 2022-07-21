#include<iostream>
using namespace std;
int main(){

//polindrom or not?

string s;
cin>>s;

string t=s;
reverse(s.begin(), s.end());

if(s==t)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;




    return 0;
}