#include <iostream>
using namespace std;
int main(){

// find the number K from given array
// print YES/NO

int n,k;
cin>>n;
int a[n];

for(int i=0; i<n; i++)
cin>>a[i];
cin>>k;

bool found=false;
for(int i=0;i<n;i++){
 if(a[i]==k){
    found=true;
    break;
}

}

if(found)//if(found==true)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;






    return 0;
}