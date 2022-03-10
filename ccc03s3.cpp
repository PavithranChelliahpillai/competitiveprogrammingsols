#include <bits/stdc++.h>
using namespace std;
#define int long long int
template<typename T>
void pop_front(std::vector<T>& vec){
  assert(!vec.empty());
  vec.front() = std::move(vec.back());
  vec.pop_back();
}
int32_t main(){
  vector<int>x={0,0,-1,1};
  vector<int>y={-1,1,0,0};
  int p=0;
  int a,b,c; cin>>a>>b>>c; vector<string>d; vector<int>s;
  for (int i=0; i<b; i++) {
    string e; cin>>e; d.push_back(e);
  }
  for (int i=0; i<b; i++) {
    for (int j=0; j<c; j++) {
      if (d[i][j]!='.') continue;
      queue<pair<int,int>>q={};
      q.push(make_pair(i,j));
      d[i][j]='A';
      p=0;
      while (!q.empty()) {
        p++;
        pair<int,int>v=q.front(); q.pop();
        int l=v.first,m=v.second;
        for (int z=0; z<4; z++) {
          if (l+x[z]<0||l+x[z]>b-1||m+y[z]<0||m+y[z]>c-1) continue;
          if (d[l+x[z]][m+y[z]]=='.') {
            d[l+x[z]][m+y[z]]='A';
            q.push(make_pair(l+x[z],m+y[z]));
          }
        }
      }
      s.push_back(p);
    }
  }
  sort(s.begin(),s.end(),greater<int>());
  int i=0; 
  while (a-s[i]>=0&&s.size()>0) {
    a-=s[i]; pop_front(s);
    i++; 
  }
  cout<<i; if (i==1) cout<<" room, "; else cout<<" rooms, ";
  cout<<a<<" square metre(s) left over"<<endl;
}