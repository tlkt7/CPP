#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
struct Person{
    string name;
    string surname;
    int age;
};

vector<Person> GetMoscowPopulation();
void PrintPopulationSize(vector<Person>p){
    cout<<"There are"<<p.size()<<"people in Moscow"<<endl;
}


int main(){
vector<Person> people=GetMoscowPopulation();
PrintPopulationSize(people);
    return 0;
}