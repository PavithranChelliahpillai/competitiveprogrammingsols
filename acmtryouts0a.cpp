#include <bits/stdc++.h>
using namespace std;
int main() {
  int a; cin>>a;
  vector<int>c;
  for (int i=0 ;i<a; i++) {
    int b; cin>>b;
    for (int j=0; j<b; j++) {
      int d; cin>>d;
      c.push_back(d);
    }
    sort(c.begin(),c.end(),greater<int>());
    cout<<c[0]<<endl;
    c.clear();
  }
}