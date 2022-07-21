#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;


void PrintSet(const set<string>& s){
cout<<"Size = "<<s.size()<<endl;
for(auto x:s){
    cout<<x<<endl;
}
}


using namespace std;
int main(){

vector<string> v = {"a","b","a"};
set<string> s(begin(v), end(v));

PrintSet(s);
    return 0;
}