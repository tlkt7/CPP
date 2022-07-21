#include<iostream>
#include<map>
using namespace std;


void PrintMap(const map<string, int>& m){
    for(const auto& a:m){
        cout<<a.first<<": "<<a.second<<endl;
    }
}



int main(){

map<string, int> m= {{"one", 1}, {"two", 2}, {"three", 3}};

m.erase("three");
PrintMap(m);

    return 0;
}