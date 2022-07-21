#include <iostream>
using namespace std;

/*
Find the factorial value of N!
i=1; res=1*1=1;
i=2; res=1*2=2;
i=3; res=2*3=6;
*/

int main(){
int n;
cin>>n;
int res=1;
for(int i=1; i<=n; i++){
res=res*i;

}

cout<<res<<endl;

   
   
    return 0;
}