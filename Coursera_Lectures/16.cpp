#include<iostream>
#include<string>
#include<vector>
using namespace std;

void PrintVector(const vector<int>& v){
    for(auto x:v){
        cout<<x<<endl;
    }
}


int main(){
vector<int> days_in_months={31,28,31,30,31};
if(true){
    days_in_months[1]++;
}
PrintVector(days_in_months);

    return 0;
}