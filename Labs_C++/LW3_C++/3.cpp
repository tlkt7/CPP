#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];

for(int i=0; i<n; i++){
    cin>>a[i];
}

int max=a[0];
int min=a[0];

for(int i=0; i<n; i++){
    if(a[i]>max){
    max=a[i];
    }
}

for(int i=0; i<n; i++){
if(a[i]<min){
    min=a[i];
}
}

for(int i=0; i<n; i++){

    if(a[i]==max){
        a[i]=min;
    }
}

for(int i=0; i<n; i++){

cout<<a[i]<<" ";
}
 cout<<endl;
    return 0;
}

/*
Given an array consisting of integers. Write a program, which will change all maximal elements to minimal
elements of the array.
*/