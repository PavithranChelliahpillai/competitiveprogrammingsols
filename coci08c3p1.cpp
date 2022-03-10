#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b=0,c=0,d=0;
  for (int i=0; i<5; i++) {
  for (int j=0; j<4; j++) {
    cin>>a;
    b+=a;
  }
  if (c<b) {
    c=b;
    d=i+1;
    b=0;
  }
  else {
    b=0;
  }
  }
  cout<<d<<" "<<c;
}