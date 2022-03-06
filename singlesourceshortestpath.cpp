#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define INF 0x3f3f3f3f
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int32_t main(){
  int a,b; cin>>a>>b; vector<pair<int,int>>e[a+1];
  for (int i=0; i<b; i++) {
    int x,y,z; cin>>x>>y>>z;
    e[x].push_back(make_pair(y,z));
    e[y].push_back(make_pair(x,z));
  }
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
  vector<int>d(a+1,INF);
  pq.push(make_pair(0,1)); d[1]=0;
  while (!pq.empty()) {
    int u=pq.top().second; pq.pop();
    for (auto x:e[u]) {
      int v=x.first,w=x.second;
      if (d[v]>d[u]+w) {
        d[v]=d[u]+w;
        pq.push(make_pair(d[v],v));
      }
    }
  }
  for (int i=1; i<a+1; i++) {
    if (d[i]==INF) cout<<-1;
    else cout<<d[i];
    cout<<endl;
  }
}
