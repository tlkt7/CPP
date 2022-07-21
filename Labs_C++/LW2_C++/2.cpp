#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    if(n<=k){
        cout<<"2"<<endl;
    }
    else if((2*n)%k==0){
        cout<<(2*n)/k<<endl;
    }
    else{
        cout<<(2*n)/k+1<<endl;
    }
    return 0;
}

/*
After the personal contest, happy but hungry programmers dropped into the restaurant Kaganat and
ordered n specialty steaks. Each steak is cooked by frying each of its sides on a frying pan for one minute.
Unfortunately, the chef has only one frying pan, on which at most k steaks can be cooked simultaneously.
Find the time the chef needs to cook the steaks
*/