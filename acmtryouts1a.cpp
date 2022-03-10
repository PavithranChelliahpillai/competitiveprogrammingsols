#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  string z;
  cin>>a;
  for (int i=0; i<a; i++) {
    cin>>z;
    if (z=="Scissors") {
      cout<<"Rock"<<endl;
    }
    else if (z=="Rock") {
      cout<<"Paper"<<endl;
    }
    else if (z=="Paper") {
      cout<<"Scissors"<<endl;
    }
    else if (z=="Fox") {
      cout<<"Foxen"<<endl;
    }
    else if (z=="Foxen") {
      return 0;
    }
  }
}