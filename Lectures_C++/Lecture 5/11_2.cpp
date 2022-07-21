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

int cnt=0;
for(int i=0;i<n;i++){
 if(a[i]==k){
     cout<<"YES"<<endl;
   return 0;
}

}



cout<<"NO"<<endl;






    return 0;
}