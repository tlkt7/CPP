#include <iostream>
using namespace std;


int f1(int n){
    if(n==1)
    return 1;
    return n*f1(n-1);
}
/*
f(n)=1, if n<2
n*f(n-1), if n>=2

1) f2(4)=> 4*f2(3)=>4*3*2*1
2) f2(3)=> 3*f2(2)=>3*2*1
3) f2(2)=> 2*f2(1)=>2*1
4) f2(1)=> 1
*/

int main(){
    int n; //4=1*2*3*4=4!
    cin>>n;

    cout<<f1(n)<<endl;


    return 0;
}