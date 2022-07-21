#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
     
     for(int i=0; i<n; i++){
         cin>>a[i];
     }

    reverse(a, a+n);
    for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;

}

//Given an array consisting of integers. Print all array in reverse order.