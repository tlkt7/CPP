#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


void PrintMap(const map<string, int>& m){
    cout<<"Size: "<<m.size()<<endl;
    for(const auto& a:m){
        cout<<a.first<<": "<<a.second<<endl;
    }
}



int main(){

vector<string> words = {"one", "two", "three", "one"};
map<string, int> count;
for(const string& word: words){
    PrintMap(count);
   ++count[word];
}

PrintMap(count);
    return 0;
}