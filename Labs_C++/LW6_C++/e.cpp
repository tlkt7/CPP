#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double fun(double a, double b){
return sqrt(pow(a,2)+pow(b,2));
}


int main(){

double a,b;
cin>>a>>b;
cout<<setprecision(4)<<fun(a,b)<<endl;



    return 0;
}