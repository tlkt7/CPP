#include<iostream>
using namespace std;
int main(){
double n,a,b,x,y,d1,d2,t1,t2;
cin>>n>>a>>b>>x>>y;

if(n>b){
d2=(n*y)/100;
t2=n-d2;
cout<<t2<<endl; 
}

else if (n>a){
d1=(n*x)/100;
t1=n-d1;
cout<<t1<<endl;
}

else{
cout<<n<<endl;
}
    return 0;
}