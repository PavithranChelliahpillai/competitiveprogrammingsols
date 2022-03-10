#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,d;
  cin>>a>>d;
  vector<int>c;
  for (int i=0; i<a; i++) {
    int b;
    cin>>b;
    c.push_back(b);
  }
  sort (c.begin(), c.end());
  for (int i=0; i<d; i++) {
    c[i]+=c[i];
  }
  sort (c.begin(), c.end());
  cout<<c[0];
}