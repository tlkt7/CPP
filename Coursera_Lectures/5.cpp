#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
int main(){

vector<int> nums={1,5,2,3,5};
int quantity = count(begin(nums), end(nums), 5);
cout<<"There are "<<quantity<<" fives";


    return 0;
}