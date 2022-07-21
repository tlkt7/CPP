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

vector<string> words = {"one", "two", "three"};
map<char, vector<string>> grouped_words;
for(const string& word: words){
    grouped_words[word[0]].push_back(word);
}

for(const auto& a:grouped_words){
    cout<<a.first<<endl;
    for(const string& word:a.second){
        cout<<word<<" ";
    }
    cout<<endl;
}
    return 0;
}