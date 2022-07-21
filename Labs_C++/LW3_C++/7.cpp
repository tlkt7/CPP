#include<iostream>
using namespace std;
int main(){


int n,m;
cin>>n>>m;
int a[n];

for(int i=0; i<n; i++){
    cin>>a[i];
}

int pos=0;

for(int i=0; i<n; i++){
if(a[i]<=m){
    pos++;
}

}

cout<<pos<<endl;
return 0;
}

/*
Given a sorted array and a target value, return the index if the target is found. If not, return the index
where it would be if it were inserted in order.
*/