#include <bits/stdc++.h>
using namespace std;
int main() {
  int a; cin>>a; vector<int>d,e;
  for (int i=0; i<a; i++) {
    int b,c; cin>>b>>c; d.push_back(b); e.push_back(c);
  }
  sort(d.begin(),d.end()); sort(e.begin(),e.end());
  cout<<2*(d[d.size()-1]-d[0]+e[e.size()-1]-e[0]);
}