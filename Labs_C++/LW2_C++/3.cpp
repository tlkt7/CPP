#include<iostream>
using namespace std;
int main(){

int a,res=0;
cin>>a;

for(int i=1; i<=a; i++){
    string s;
    cin>>s;

   
        
        if(s.back()=='7'){
        res++;
    }
    
    
    
}
cout<<res<<endl;

    return 0;

}



// count how many number 7