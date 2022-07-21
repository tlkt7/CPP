#include<iostream>
#include<cmath>
using namespace std;
int main(){

double  a,b,c,x1,x2,d;
cin>>a>>b>>c;
d=pow(b,2)-4*a*c;
if(d>0&&a!=0){
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
cout<<x1<<" "<<x2<<endl;
}
else if(a==0&&b==0){
    cout<<" "<<endl;
}
else if(a==0){
    cout<<-c/b<<endl;
}

else if(d==0){
x1=(-b/(2*a));
cout<<x1<<endl;
}
else if(d<0){
cout<<" "<<endl;
}

return 0;
}


