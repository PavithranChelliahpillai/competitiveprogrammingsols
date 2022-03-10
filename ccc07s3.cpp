#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
  vector<vector<int>>a(1e4); 
  int b; cin>>b;
  for (int i=0; i<b; i++) {
    int c,d; cin>>c>>d;
    a[c].push_back(d);
  }
  while (1) {
    int c,d; cin>>c>>d;
    if (c==0) return 0;
    vector<bool>g(1e4); fill(g.begin(),g.end(),false);
    queue<int>q; q.push(c); bool v=false; int m=-1;
    while (!q.empty()) {
      m++;
      int e=q.front(); q.pop();
      if (!g[e]) {
        g[e]=true;
        for (int i=0; i<a[e].size(); i++) {
          q.push(a[e][i]); if (a[e][i]==d) {v=true; break;}
        }
        if (v) break;
      }
    }
    if (!v) cout<<"No"<<endl;
    else cout<<"Yes "<<m<<endl;
  }
}