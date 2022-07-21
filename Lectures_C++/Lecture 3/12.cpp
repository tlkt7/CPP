#include <iostream>
using namespace std;
int main(){

/*
n=245:a=245%10=5; sum=sum+a=0+5=5; n=n/10
n=24:a=24%10=4; sum=sum+a=5+4=9; n=n/10
n=2:a=2%10=2; sum=sum+a=9+2=11; n=n/10
n=0:stoop looping
*/

int n,a, sum=0;
cin>>n;
while(n){
a=n%10;
sum=sum+a;
n=n/10;
}
cout<<sum<<endl;
    return 0;
}