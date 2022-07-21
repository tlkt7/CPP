#include <iostream>
using namespace std;
int main(){

/*
You are given number N and N elements.
*/

int n;
cin>>n;
int a[n];
for (int i=0; i<n; i++)
cin>>a[i];

// your code

for(int i=0; i<n; i++)
for(int g=0; g<n; g++)

if(a[i]==a[g])
cout<<"YES"<<endl;

    return 0;
    cout<<"no"<<endl;
}