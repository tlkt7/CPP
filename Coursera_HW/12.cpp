#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
bool IsPalindrom(string s){
    string t=s;
    reverse(s.begin(), s.end());
    if(s==t){
        return true;
    }
    else{
    return false;
}
}