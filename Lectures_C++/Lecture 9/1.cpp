#include <iostream>
using namespace std;

void show(){
cout<<"hi"<<endl;

}

void show2(){
    cout<<"fucntion 2"<<endl;

show();
}

int main(){
    show2();
    return 0;
}