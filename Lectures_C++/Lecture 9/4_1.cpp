#include <iostream>
using namespace std;

void f1(int n){
    for(int i=1; i>n; i--)
    cout<<i<<" ";
}

void f2(int n){
    if(n==0)// -> base case
    return;
    cout<<n<<" ";
    f2(n-1);
}
/*
n=3=>cout<<3<<" "; f2(2)
n=2=>cout<<2<<" "; f2(1)
n=1=>cout<<1<<" "; f2(0)
n=0=> base case=> stop execuption;
*/
int main(){
int n;
cin>>n;
f1(n);
f2(n);
 return 0;
}