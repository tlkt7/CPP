#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
struct person{
    string name;
    string surname;
    int age;
};

int main(){

vector<person>staff;
staff.push_back({"Ibrahim", "Tlektes", 18});
staff.push_back({"Adlet", "Almaganbetov", 37});


cout<<staff[1].age<<endl;




    return 0;
}