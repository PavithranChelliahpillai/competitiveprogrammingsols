#include <bits/stdc++.h>
using namespace std;
vector<int>w={-1,1,0,0};
vector<int>p={0,0,1,-1};
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a,b; cin>>a>>b; char c[a][b]; queue<pair<int,int>>q; bool z[a][b]; int v[a][b]; int o=0; bool m[a][b];  
  for (int i=0; i<a; i++) {
    string d; cin>>d;
    for (int j=0; j<b; j++) {
      c[i][j]=d[j];
      z[i][j]=0; v[i][j]=123456789; m[i][j]=0;
      if (c[i][j]=='.') o++;
    }
  }
  for (int i=0; i<a; i++) {
    for (int j=0; j<b; j++) {
      if (c[i][j]=='C'){
        for (int k=j; k<b; k++) {if (c[i][k]=='W') break; m[i][k]=true;}
        for (int k=i; k<a; k++) {if (c[k][j]=='W') break; m[k][j]=true;}
        for (int k=j; k>=0; k--) {if (c[i][k]=='W') break; m[i][k]=true;}
        for (int k=i; k>=0; k--) {if (c[k][j]=='W') break; m[k][j]=true;}
      }
      else if (c[i][j]=='S') {q.push(make_pair(i,j)); v[i][j]=0;}
    }
  }
  while (!q.empty()) {
    pair<int,int>e=q.front(); q.pop();
    int x=e.first,y=e.second;
    //cout<<'('<<x<<','<<y<<')'<<endl;
    if (c[x][y]=='W') continue;
    else if (m[x][y]&&c[x][y]=='.') continue;
    else if (c[x][y]=='S'&&m[x][y]==1) {for (int i=0; i<o; i++) cout<<-1<<"\n"; return 0;}
    else if (c[x][y]=='.'||c[x][y]=='S') {
      for (int i=0; i<4; i++){
        int x1=x+w[i],y1=y+p[i];
        if (x1>0&&x1<a&&y1>0&&y1<b) {
          if (c[x1][y1]=='W') continue;
          if (!z[x1][y1]||(z[x1][y1]&&v[x1][y1]>v[x][y]+1))
          {q.push(make_pair(x1,y1)); v[x1][y1]=min(v[x][y]+1,v[x1][y1]); z[x][y]=true; z[x1][y1]=true;}
        }
      }
    }
    else if (c[x][y]=='L') {
      int y1=y-1;
      if (y1<0) continue;
      if (z[x][y1]&&c[x][y1]!='.') continue;
      if (!z[x][y1]||(z[x][y1]&&v[x][y1]>v[x][y])){
      q.push(make_pair(x,y1)); v[x][y1]=min(v[x][y1],v[x][y]); z[x][y]=true; z[x][y1]=true;}
    }
    else if (c[x][y]=='R') {
      int y1=y+1;
      if (y1>=b) continue;
      if (!z[x][y1]||(z[x][y1]&&v[x][y1]>v[x][y])){
      q.push(make_pair(x,y1)); v[x][y1]=min(v[x][y1],v[x][y]); z[x][y]=true; z[x][y1]=true;}
    }
    else if (c[x][y]=='U') {
      int x1=x-1;
      if (x1<0) continue;
      if (!z[x1][y]||(z[x1][y]&&v[x1][y]>v[x][y])){
      q.push(make_pair(x1,y)); v[x1][y]=min(v[x1][y],v[x][y]); z[x][y]=true; z[x1][y]=true;}
    }
    else if (c[x][y]=='D') {
      //cout<<"dd"<<endl;
      int x1=x+1;
      if (x1>=a) continue;
      if (!z[x1][y]||(z[x1][y]&&v[x1][y]>v[x][y])){
      q.push(make_pair(x1,y)); v[x1][y]=min(v[x1][y],v[x][y]); z[x][y]=true; z[x1][y]=true;}
    }
    /*
    cout<<endl;
    for (int i=0; i<a; i++) {
    for (int j=0; j<b; j++) {
      cout<<v[i][j]<<" ";
    }
    cout<<endl<<endl;
    }
    */
  }
  
  for (int i=0; i<a; i++) {
    for (int j=0; j<b; j++) {
      if (c[i][j]=='.'){
        if (m[i][j]||v[i][j]==123456789) cout<<-1<<"\n";
        else cout<<v[i][j]<<"\n";
      }
    }
  }
}