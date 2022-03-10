#include <bits/stdc++.h>
using namespace std;
int main() {
  int b;
  vector<int>c;
  for (int a=0; a<3; a++) {
    cin>>b;
    c.push_back(b);
  }
  sort(c.begin(),c.end());
  cout<<c[1];
}