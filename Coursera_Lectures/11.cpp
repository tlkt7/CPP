#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void Sort(vector<int>& v){
    sort(begin(v), end(v));
}




int main(){

vector<int> nums={0,3,4,6,9,2,1};
Sort(nums);
for(auto a:nums){
    cout<<a<<" ";
}

    return 0;
}
