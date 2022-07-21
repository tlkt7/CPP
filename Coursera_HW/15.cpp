#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void MoveStrings(vector<string>& source, vector<string>& destination){
for(auto a:source){
    destination.push_back(a);
}

source.clear();
}



int main(){
vector<string> source={"a", "b", "c"};
vector<string> destination={"z"};
MoveStrings(source, destination);
for(auto a:source){
    cout<<a<<" "<<endl;
}
for(auto a:destination){
    cout<<a<<" ";
}

    return 0;
}