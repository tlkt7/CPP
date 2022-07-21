#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;
int a[n][n];

for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
        cin>>a[i][j];

int cnt=0;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(a[i][j]!=a[j][i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
}
cout<<"YES"<<endl;
    return 0;
}