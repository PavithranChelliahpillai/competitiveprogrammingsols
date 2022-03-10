#include <iostream>
using namespace std;
int main() {
  int numbers;
  double maxs=-10000000,a;
  cin>>numbers;
  for (int i=0; i<numbers; i++){
    cin >> a;
    maxs = max(a,maxs);
  }
  cout.setf(ios::fixed);
  cout.precision(4);
  cout << maxs;
}