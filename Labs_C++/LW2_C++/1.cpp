#include<iostream>
using namespace std;
int main(){
int a,b;
int arr[1000];
cin>>b;

for(int i=0; i<b; i++){
cin>>arr[i];
}

for(int i=1; i<b; i++){
if(arr[0]<arr[i])
arr[0]=arr[i];
}
cout<<arr[0]<<endl;
    return 0;
}

//Given n integers. In this task, you should find the maximum from these numbers.