#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,d; cin>>a; vector<int>c,e;
  for (int i=0; i<a; i++) {
    d=1;cin>>b;
    for (int j=0; j<b; j++) {int f; cin>>f; c.push_back(f);}
    while (true) {
      if (c[c.size()-1]==d) {
        c.pop_back(); d++;
      }
      else if (e.size()!=0 && e[e.size()-1]==d) {
        e.pop_back(); d++;
      }
      else {
        e.push_back(c[c.size()-1]); c.pop_back();
      }
      if (c.size()==0 && e.size()==0) {
        cout<<"Y"<<endl; break;
      }
      else if (c.size()==0 && e.size()!=0 && e[e.size()-1]!=d) {
        cout<<"N"<<endl; break;
      }
    }
    e.clear(); c.clear();
  }
}