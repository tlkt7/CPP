#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;
int main(){

map<string, int> b={{"a",1}, {"b",2}, {"c",3}};

int sum=0;
string concat;
for(auto i:b){
    concat+=i.first;
    sum+=i.second;
}

cout<<concat<<endl;
cout<<sum<<endl;




    return 0;
}