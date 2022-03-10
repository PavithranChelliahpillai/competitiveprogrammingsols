#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  cout<<(n/2)+1-max(0,n-5);
}