#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b; cin>>a; vector<int>c; vector<pair<int,int>>e;
  for (int i=0; i<a; i++) {
    cin>>b; c.push_back(b);
  }
  sort(c.begin(),c.end(),greater<int>());
  int i=0,k,l=1;
    while (i<c.size()) {
      k=c[i];
      if (c[i+1]!=k) {
        e.push_back(make_pair(l,k));
        l=1;
      }
      else {
        l++;
      } 
      i++;
    }
  sort(e.begin(),e.end()); reverse(e.begin(),e.end());
  int m=0,h=e[0].second,p,q,r,s,u; 
  while (m<e.size()) {
    if (e[m].first!=e[0].first) {
      p=e[m-1].second;
      q=e[m].first; 
      u=e[m].second;
      r=m;
      if (m>1) {
        cout<<abs(h-p)<<endl; return 0;
      }
      break;
    }
    else if (m==e.size()-1){
      p=e[m].second;
      cout<<abs(h-p)<<endl; return 0;
    }
    m++; 
  }
  while (r<e.size()) {
    if (e[r].first!=q) {
      s=e[r-1].second;
      break;
    }
    else if (r==e.size()-1) {
      s=e[r].second;
      break;
    }
    r++;
  }
  int v=abs(h-s),w=abs(p-u);
  //for (int z=0; z<e.size(); z++) {
  //  cout<<e[z].first<<" "<<e[z].second<<endl;
  //}
  if (v>=w) cout<<v<<endl;
  else cout<<w<<endl;
  //cout<<abs(e[0].second-e[1].second)<<endl;
}