#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];

for(int i=0; i<n; i++){
cin>>a[i];
}
for(int i=0; i<n; i++){
    if(a[i]==a[i]){
cout<<"-1"<<endl;
    }
}


    return 0;
}





/*int n,k;
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
*/




