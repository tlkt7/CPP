#include <iostream>
#include <vector>

using namespace std;
int main(){

int n;
vector<bool> a;
cin >> n;
if(n == 0){
cout << 0;
}
else{
while(n != 0){
a.push_back(n % 2);
n /= 2;
}
for(int i = a.size()-1; i >= 0; --i)
cout << a[i];
return 0;
}

return 0;

}





