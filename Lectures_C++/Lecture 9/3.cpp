#include <iostream>
using namespace std;

void show(){
cout<<"line 1\n";
cout<<"line 2\n";
cout<<"line 3\n";

show();
}

// stack overflow - error
// base case - stopping moment for your recursion


int main(){
show();
    return 0;
}