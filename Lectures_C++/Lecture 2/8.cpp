
#include <iostream>
#include <cmath>
using namespace std;
int main(){

/*
Task set 1 for i-th bit of number (&,|,^)
*/

int n=5,i,a,res;
cin>>i;
a=(1<<i);
res=n^=a;
cout<<res<<endl;

//n|=(1<<i) <=> n=n|(1<<i);



    return 0;
}