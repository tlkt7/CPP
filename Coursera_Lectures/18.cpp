#include<iostream>
#include<map>
using namespace std;

void PrintMap(const map<int, string>& m){
    cout<<"Size "<<m.size()<<endl;
    for(auto a:m){
        cout<<a.first<<": "<<a.second<<endl;
    }
}

void PrintReversedMap(const map<string, int>& m){
    cout<<"Size "<<m.size()<<endl;
    for(auto a:m){
        cout<<a.first<<": "<<a.second<<endl;
    }
}


map<string, int> BuildReversedMap(const map<int, string>& m){
    map<string, int> result;
    for(auto a:m){
        result[a.second]=a.first;
    
    }
return result;
}


int main(){

map<int, string> events;
events[2002]="My birthday";
events[2006]="Daniel's birthday";
events[1982]="Father's birthday";
events[1983]="Mother's birthday";
PrintMap(events);

cout<<events[2002]<<endl;

events.erase(2002);
PrintMap(events);

PrintReversedMap(BuildReversedMap(events));

    return 0;
}