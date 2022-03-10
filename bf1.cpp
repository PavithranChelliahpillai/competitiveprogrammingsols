#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b;
  cin>>a;
  vector<int>c;
  for (int i=0; i<a; i++) {
    cin>>b;
    c.push_back(b);
  }
  sort(c.begin(),c.end());
  for (int n=0; n<c.size(); n++) {
    cout<<c[n]<<endl;
  }
}