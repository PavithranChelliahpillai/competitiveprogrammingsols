#include <iostream>
using namespace std;
int main() {
  int numbers;
  double mins=10000,a;
  cin>>numbers;
  for (int i=0; i<numbers; i++){
    cin >> a;
    mins = min(a,mins);
  }
  cout << mins;
}
