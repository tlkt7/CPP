#include <iostream>
 using namespace std;
int Factorial(int a){
    if(a==0&&a==1)
    return 1;
    if(a<1)
    return 1;
    else
    return a*Factorial(a-1);
    
    
}

int main(){

int a;
cin>>a;
if(a<0){
cout<<"1"<<endl;
}
else{
    cout<<Factorial(a)<<endl;
}

    return 0;
}