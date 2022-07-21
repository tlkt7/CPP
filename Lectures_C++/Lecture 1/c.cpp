#include <iostream>
using namespace std;
 
int main() {
  int x;
  cin >> x;
  int perviy_bit = (x / 8) % 2;
  int vtoroy_bit = (x / 4) % 2;
  int tretiy_bit = (x / 2) % 2;
  int chetvertiy_bit = x % 2; 
  cout << chetvertiy_bit * 8 + tretiy_bit * 4 + vtoroy_bit * 2 + perviy_bit<<endl;
  return 0;
}  