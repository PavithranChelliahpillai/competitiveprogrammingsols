#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define INT int
int32_t main(){
  vector<string>y; vector<int>k; int o=0;
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL); cout.tie(NULL);
  string a; cin>>a; vector<string>b;
  while (a!="**") {
    b.push_back(a); cin>>a; 
  }
  vector<vector<int>>c(27); 
  for (int i=0; i<b.size(); i++) {
    c[(int)b[i][0]-65].push_back((int)b[i][1]-65);
    c[(int)b[i][1]-65].push_back((int)b[i][0]-65);
  }
  for (int l=0; l<b.size(); l++) {
    c[(int)b[l][0]-65].erase(find(c[(int)b[l][0]-65].begin(),c[(int)b[l][0]-65].end(),(int)b[l][1]-65));
    c[(int)b[l][1]-65].erase(find(c[(int)b[l][1]-65].begin(),c[(int)b[l][1]-65].end(),(int)b[l][0]-65));
    if (l!=0) {
      c[(int)b[l-1][0]-65].push_back((int)b[l-1][1]-65);
      c[(int)b[l-1][1]-65].push_back((int)b[l-1][0]-65);
    }
    queue<int>q={}; vector<bool>m(26); fill(m.begin(),m.end(),false); q.push(0); bool v=false;
    while (!q.empty()) {
      int w=q.front(); q.pop();
      for (int i=0; i<c[w].size(); i++) {
        if (!m[c[w][i]]) {
          m[c[w][i]]=true;
          q.push(c[w][i]);
          if (c[w][i]==1) {
            v=true; break;
          }
        }
      }
      if (v) break;
    }
    if (!v) {o++; k.push_back(l);}
  }
  for (auto i:k) cout<<b[i]<<endl;
  cout<<"There are "<<o<<" disconnecting roads."<<endl;
}