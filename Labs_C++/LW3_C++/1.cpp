#include<iostream>
#include<algorithm>

using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0 ; i<n; i++){
    cin>>a[i];
}
cout<<max_element(a,a+n)-a+1<<endl;
    return 0;
}

/*

Given an array consisting of integers. Write a program, which finds position of maximum element of array.

*/