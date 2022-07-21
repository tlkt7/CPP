#include<iostream>
using namespace std;

bool isequal(int a, int b){
    
        if(a==b){
            return true;
        }
        else{
            return false;
    }
}



int main(){

int a;
cin>>a;
int n[a];
for(int i=0; i<a; i++){
    cin>>n[i];
}

int x;
cin>>x;
for(int i=0; i<a; i++){
    if(isequal(x,n[i])){
        cout<<"Yes"<<endl;
        return 0;
    }
}
    cout<<"No"<<endl;
}