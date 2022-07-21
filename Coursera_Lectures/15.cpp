#include<iostream>
#include<string>
#include<vector>
using namespace std;

void PrintVector(const vector<string>& v){
    for(string s:v){
        cout<<s<<endl;
    }
}





int main(){

int n;
cin>>n;
vector<string> v;
for(int i=0; i<n; ++i){
    string s;
    cin>>s;
    v.push_back(s);
}
PrintVector(v);
    return 0;
}