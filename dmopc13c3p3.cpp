#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b; cin>>a>>b;
  int c[a][a]; bool h[a][a]; memset(h,0,sizeof h);
  for (int i=0; i<a; i++) for (int j=0; j<a; j++) cin>>c[i][j];
  queue<pair<int,int>>d; d.push(make_pair(0,0)); pair<int,int>e; int f[4]={0,1,0,-1}; int g[4]={1,0,-1,0};
  while (!d.empty()) {
    e=d.front(); d.pop(); //cout<<e.first<<','<<e.second<<endl;
    if (e.first==a-1&&e.second==a-1) {cout<<"yes\n"; return 0;}
    for (int i=0; i<4; i++) {
      int k=e.first+f[i],l=e.second+g[i];
      if (k<0||l<0||k>=a||l>=a||h[k][l]||abs(c[e.first][e.second]-c[k][l])>b) continue; 
      h[k][l]=1;
      d.push(make_pair(k,l));
      //cout<<k<<","<<l<<endl;
    }
  }
  cout<<"no\n";
}