#include <iostream>
using namespace std;
int main() {
  int a;
  cin>>a;
  int b=5*a-400;
  cout<<b<<endl;
  if (b<100) {
    cout<<"1";
  }
  else if (b>100) {
    cout<<"-1";
  }
  else {
    cout<<"0";
  }
  cout<<endl;
}