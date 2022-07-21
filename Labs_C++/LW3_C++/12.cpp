#include<iostream>
#include<math.h>
using namespace std;

bool isperfectsquare(int a){
int sr=sqrt(a);
if(sr*sr==a){
    return true;
}
else{
    return false;
}
}


int main(){

int a;
bool perfect=false;
cin>>a;
perfect=isperfectsquare(a);
if(perfect){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
    return 0;
}

//Given a single number x check is it perfect square or not? Perfect square is numbers like 4, 9, 25