#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,e=0;
  cin>>a;
  char b;
  vector<char>c;
  vector<char>d;
  for (int i=0; i<a; i++) {
    cin>>b;
    c.push_back(b);
  }
  for (int i=0; i<a; i++) {
    cin>>b;
    d.push_back(b);
  }
  for (int i=0; i<a; i++) {
    if (d[i]==c[i]) {
      e++;
    }
  }
  cout<<e;
}