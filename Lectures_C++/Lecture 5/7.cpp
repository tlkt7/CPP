#include <iostream>
using namespace std;
int main(){
// show indexes where stored even values

int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];

for(int i=0; i<n; i++)
if (a[i]%2==0)
cout<<i<<" ";




    return 0;
}