#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,c=200;
  cin>>a;
  for (int i=0; i<a; i++) {
    int b;
    cin>>b;
    c-=b;
  }
  if (c>=0) {
    cout<<c;
  }
  else {
    cout<<"Over maximum capacity!";
  }
}