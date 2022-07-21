#include <iostream>
using namespace std;
 int main(){

/*
Find the sum of all numbers are enter by user till 0
*/

int n, sum=0;
for( ; ; ){
cin>>n;
sum=sum+n;
if (n==0)
break;

}
cout<<sum<<endl;


     return 0;
 }