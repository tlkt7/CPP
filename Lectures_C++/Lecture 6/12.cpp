#include <iostream>
using namespace std;
int main(){

int n,m;
cin>>n>>m;
int a[n][m];

for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
        cin>>a[i][j];

int cnt=0;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if (a[i][j]==a[j][i])
        cnt++;
    }
}
if(cnt==n*n){
    cout<<"YES"<<endl;
}else
cout<<"NO"<<endl;

    return 0;
}