#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
char a[n][n];
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        a[i][j]='.';
    }
}

for(int i=0; i<n; i++){
    for(int j=0; j<0; j++){
        if(i+j==n-1){
            a[i][j]=n-(n-i-1)+48;
        }
    }
}

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}