#include <bits/stdc++.h>
using namespace std;
#define int long long int
vector<int>p={1,-1,0,0};
vector<int>k={0,0,-1,1};
int32_t main(){
  int a; cin>>a; bool l=false; int z=0;
  while (a--) {
    l=false;
    int b,c; cin>>b>>c; vector<string>d(c); queue<pair<int,int>>q={}; bool m[c][b]; memset(m, 0,sizeof m); int w[c][b]; fill(w[0], w[0]+c*b, 1e9);
    for (int k=0; k<c; k++) cin>>d[k];
    for (int k=0; k<c; k++) {
      for (int j=0; j<b; j++) {
        if (d[k][j]=='C') {q.push(make_pair(k,j)); w[k][j]=0;}
      }
    }
    while (!q.empty()) {
      pair<int,int>v=q.front(); q.pop();
      int x=v.first,y=v.second;
      m[x][y]=true;
      for (int i=0; i<4; i++) {
        if (x+p[i]>-1&&x+p[i]<c&&y+k[i]>-1&&y+k[i]<b&&!m[x+p[i]][y+k[i]]) {
          int x1=x+p[i],y1=y+k[i];
          if (d[x1][y1]=='O') {q.push(make_pair(x1,y1)); m[x1][y1]=true; w[x1][y1]=min(w[x1][y1],w[x][y]+1);}
          else if (d[x1][y1]=='W') {l=true; z=w[x][y]+1; break;}
        }
      }
      if (l) break;
    }
    if (l&&z<60) cout<<z<<endl;
    else cout<<"#notworth"<<endl;
  }
}