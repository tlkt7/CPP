#include<iostream>
using namespace std;
int main(){

string s;
cin>>s;
int cnt=0;
for(int i=0; i<s.size()/2; i++){
    if(s[i]==s.size()-1-i)
    cnt++;
}

if(cnt==s.size()/2)
cout<<"yes"<<endl;
else
 cout<<"no"<<endl;






return 0;

}