#include <iostream>
using namespace std;

void show(){
cout<<"line 1\n";
cout<<"line 2\n";
cout<<"line 3\n";
return;
cout<<"line 4\n";
cout<<"line 5\n";
cout<<"line 6\n";
}
int main(){
show();
cout<<"line 4 from fucntion\n";
    return 0;
}