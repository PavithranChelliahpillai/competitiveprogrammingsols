#include <iostream>
using namespace std;
int main() {
  int rangestr, rangend;
  cin>>rangestr>>rangend;
  int factortot;
  int counter=0;
  int i=rangestr;
  int a=1;

  for (i=rangestr; i<=rangend; i++) {
    factortot=0;
    for (a=1; a<=i; a++) {
      if(i%a==0) {
        factortot++;
      }
      }
    if(factortot==4) {
    counter++;
    }
  }
cout<<"The number of RSA numbers between "<<rangestr<<" and "<<rangend<<" is "<<counter;
}