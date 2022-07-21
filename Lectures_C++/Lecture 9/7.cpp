#include <iostream>
using namespace std;

int f2(int a, int n){
    if(n==0)
    return 1;
    return a*f2(a,n-1);
}

/*
1)f2(2,3)=> 2*f2(2,2);=>2*2*2*1
2)f2(2,2)=> 2*f2(2,1);=>2*2*1
3)f3(2,1)=> 2*f2(2,0);=>2*1
4)f2(2,0)=> 1
*/

int main(){
    int a,n;
    cin>>a>>n;
    cout<<f2(a,n)<<endl;
}