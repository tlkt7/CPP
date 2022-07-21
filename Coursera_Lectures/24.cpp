#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int q;
cin>>q;

map<string, string> country_to_capital;

for(int i=0; i<q; i++){
    string operation_code;
    cin>>operation_code;

    if(operation_code=="CHANGE_CAPITAL"){
        string country, new_capital;
        cin>>country>>new_capital;

        if(country_to_capital.count(country)==0){
            cout<<"Introduce new country"<<country<<"with capital"<<new_capital<<endl;
        }
        else{
            const string& old_capital=country_to_capital[country];
            if(old_capital==new_capital){
                cout<<"Country"<<country<<"hasn't changed its capital"<<endl;
            }
            else{
                cout<<"Country"<<country<<"has changed its capital from"<<old_capital<<"to"<<new_capital<<endl;
            }
        }
        country_to_capital[country]=new_capital;
        }

        else if(operation_code=="RENAME"){
            string old_country_name, new_country_name;
            cin>>old_country_name>>new_country_name;
            
        }

    }
    
}
}

    return 0;
}