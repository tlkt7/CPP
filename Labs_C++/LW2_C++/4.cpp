#include <iostream>
using namespace std;
int main()
{
int n,res=0;
string c;
cin>>n;
for(int i=0; i<n; i++){
   cin>>c;
for(int j=0; j<c.size(); j++){
if(c[j]=='0'){
res++;
}
}
}
cout<<res<<endl;
return 0;
}

// count 0 