#include<iostream>

using namespace std;

/*
You are given integer number N, guaranteed that the number has exactly 4 bits in binary representation.
reverse the number in binary representation and print out it.
reverse example: 12 in binary representation is 1100, 0011 is reversed number, it means you should output
3.
*/


int main(){
int n;
cin>>n;
cout<<(n/8%2*1)+(n/4%2*2)+(n/2%2*4)+(n/1%2*8)<<endl;
       
     
return 0;
}