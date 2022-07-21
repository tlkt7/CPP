#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n; 
vector<int> temperatures(n);
int sum=0;
for(int& temperature: temperatures){
    cin>>temperature;
    sum+=temperature;
}

int a=sum/n;
vector<int> res;
for(int i=0; i<n; i++){
    if(temperatures[i]>a){
        res.push_back(i);
    }
}

cout<<res.size()<<endl;
for(int x:res){
    cout<<x<<" ";
}

cout<<endl;

    return 0;
}

