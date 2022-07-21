#include <iostream>
using namespace std;
int main(){

int n,m;
cin>>n>>m;
int a[n][m];
for (int i=0; i<n; i++)
for(int j=0; j<m; j++)
cin>>a[i][j];

int maxi;
for(int i=0; i<n; i++){
    maxi=a[i][0];
    for(int j=0; j<n; j++){
        if(a[i][j]>maxi)
        maxi=a[i][j];
    }
    cout<<maxi<<endl;
}
    return 0;
}