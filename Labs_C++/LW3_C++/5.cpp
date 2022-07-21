#include<iostream>
using namespace std;
int main(){

long long n,l,r,sum=0;
cin>>n>>l>>r;
int a[n];

for(int i=0; i<n; i++){
    cin>>a[i];
    
}

for(int i=0; i<l-1; i++){
    cout<<a[i]<<" ";
}

for(int i=r-1; i>=l-1; i--){
    cout<<a[i]<<" ";
}

for(int i=r; i<n; i++){
    cout<<a[i]<<" ";
}
cout<<endl;
    return 0;
}

/*
Given an array consisting of integers. Write program, which will reverse elements in interval l, r.

input:
6 4 6
8 12 8 12 2 2

output:
8 12 8 2 2 12

*/