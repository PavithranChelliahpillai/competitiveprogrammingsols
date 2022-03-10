#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
  int a; cin>>a; vector<vector<int>>b(a+5);
  int mindist = 1e9;
  vector<bool>v(a+5); vector<int>m(a+5);
  bool ending = true;
  fill(m.begin(),m.end(),1e9);
  fill(v.begin(),v.end(),false);
  for (int i=0; i<a; i++) {
    int c; cin>>c;
    for (int j=c; j>0; j--) {
      int d; cin>>d;
      b[i].push_back(d-1);
    }
  }
  queue<int>q; q.push(0); v[0]=true; m[0]=0;
  while (!q.empty()){
    int l=q.front(); q.pop();
    for (int i=0; i<b[l].size(); i++) {
      if (!v[b[l][i]]) {
        q.push(b[l][i]);
        v[b[l][i]] = true;
        m[b[l][i]] = min(m[b[l][i]], m[l]+1);
        if(b[b[l][i]].size()==0) {
          mindist = min(mindist, m[b[l][i]]);
        }
      }
    }
  }
  for(int i=0;i<a;i++) {
    if(!v[i]) {
      cout << "N" << endl;
      ending = false;
      break;
    }
  }
  if(ending) {
    cout << "Y" << endl;
  }
  cout << mindist+1 << endl;
}