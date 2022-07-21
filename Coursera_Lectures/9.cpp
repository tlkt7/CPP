#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool contains(vector<string> words, string w){
    for(auto s:words){
        if(s==w){
            return true;
        }
    }
    return false;
}

int main(){
cout<<contains({"milk", "water", "air"}, "fire");
    return 0;
}