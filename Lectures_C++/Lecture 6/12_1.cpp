#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;
int a[n][n];

for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
        cin>>a[i][j];

bool ok=true;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if (a[i][j]!=a[j][i])
        ok=false;
        
    }
}
if(ok)
cout<<"YES"<<endl;
else 
cout<<"NO"<<endl;
    return 0;
}