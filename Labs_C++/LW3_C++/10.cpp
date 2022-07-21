#include<iostream>
#include<cmath>
using namespace std;
int main(){

int n,square;
cin>>n;
int a[n];

for(int i=0; i<n; i++){
cin>>a[i];
}
for(int i=0; i<n; i++){
square=a[i]*a[i];
cout<<square<<" ";
}
cout<<endl;

    return 0;
}

//Given an array, output the square value of each element.