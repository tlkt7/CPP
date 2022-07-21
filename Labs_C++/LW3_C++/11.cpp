#include<iostream>
using namespace std;
int main(){

int a,b,c=0,d=0;
cin>>a;
c=a/2;
for(b=2; b<=c; b++){
    if(a%b==0){
        cout<<"No"<<endl;
        d=1;
        break;
    }
}

if(d==0){
    cout<<"Yes"<<endl;
}
    return 0;
}

//prime number