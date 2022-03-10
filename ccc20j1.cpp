#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c;
  cin>>a>>b>>c;
  int d=1*a+2*b+3*c;
  if (d>=10) {
    cout<<"happy";
  }
  else {
    cout<<"sad";
  }
}