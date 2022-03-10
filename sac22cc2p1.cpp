#include <bits/stdc++.h>
using namespace std;
int main() {
  int a=0,b=0,f=0; cin>>a>>b; vector<pair<int,string>>c;
  for (int i=0; i<a; i++) {
    int d=0; cin>>d; string e; cin>>e;
    c.push_back(make_pair(d,e));
  }
  for (int i=0; i<b; i++) {
    int d=0; cin>>d; 
    for (int j=0; j<c.size(); j++) {
      if(c[j].first>f&&c[j].first<=d) cout<<c[j].second<<endl; 
    }
    f=d;
  }
  return 0;
}