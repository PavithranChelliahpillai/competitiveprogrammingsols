#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("O2")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
#pragma warning(disable:4996)
#define MAX 1e9
int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int a,b,c; cin>>a>>b>>c;
  vector<vector<pair<int,pair<int,int>>>>d(b+2); vector<int>v(b+2); fill(v.begin(),v.end(),1e9);
  vector<int>w(b+2); fill(w.begin(),w.end(),0);
  for (int i=0; i<c; i++) {
    int e,f,g,h; cin>>e>>f>>g>>h;
    d[e].push_back(make_pair(f,make_pair(g,h)));
    d[f].push_back(make_pair(e,make_pair(g,h)));
  }
  int e,f; cin>>e>>f;
  priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q; 
  q.push(make_pair(0,make_pair(0,e))); v[e]=0;
  while (!q.empty()) {
    pair<int,pair<int,int>>z=q.top(); q.pop();
    //cout<<z.first<<','<<z.second.first<<','<<z.second.second<<endl;
    for (int i=0; i<d[z.second.second].size(); i++) {
      if (d[z.second.second][i].second.first+z.first>v[d[z.second.second][i].first]) continue;
      if (d[z.second.second][i].second.second+z.second.first>=a) continue;
      v[d[z.second.second][i].first]=d[z.second.second][i].second.first+z.first;
      w[d[z.second.second][i].first]=d[z.second.second][i].second.second+z.second.first;
      q.push(make_pair(v[d[z.second.second][i].first],make_pair(w[d[z.second.second][i].first],d[z.second.second][i].first)));
    }
  }
  if (v[f]==1e9) cout<<-1<<endl;
  else cout<<v[f]<<endl;
}