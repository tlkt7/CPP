#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

bool IsPalindrom(string s){
for(int i=0; i<s.size()/2; ++i){
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
}
return true;

}


vector<string> PalindromFilter(vector<string> words, int minLength){

vector<string> output;
vector<string>::iterator a;
for(a=words.begin(); a!=words.end();a++){
if(((*a).size()>=(unsigned)minLength)&&IsPalindrom(*a))
output.push_back(*a);
}
return output;
}
