#include <iostream>
using namespace std;
int main(){

// find the maximum number from given array

int n, maxi;
cin>>n;
int a[n];

for(int i=0; i<n; i++)
cin>>a[i];

maxi=0;
for(int i=0; i<n; i++)
if(a[i]>maxi)
maxi=a[i];

cout<<maxi<<endl;




    return 0;
}