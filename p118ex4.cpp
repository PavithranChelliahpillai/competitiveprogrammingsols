#include <iostream>
using namespace std;
int main() {
  int number;
  cin>>number;

  int multiplier = 1;
  
  while (multiplier<=number) {
    cout<<number<<" X "<<multiplier<<" = "<<number*multiplier;
    cout<<"\n";
    multiplier++;
  }
}