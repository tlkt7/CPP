#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

string a;
int count=0;
cin>>a;

for(int i=0; i<a.size(); i++){

if(a[i]=='f'){
count++;
}
if(count==2){
cout<<i<<endl;
return 0;
}


}


if(count==1){
    cout<<"-1"<<endl;
    return 0;
}
if(count==0){
    cout<<"-2"<<endl;
    return 0;
}


    return 0;
}

