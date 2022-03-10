#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
  int a,b; cin>>a>>b; vector<pair<string,int>>c;
  for (int i=0; i<b; i++) {
    int d; string e; cin>>e>>d;
    c.push_back(make_pair(e,d));
  }
  int dp[101],p[101];
  memset(dp,0x3f,sizeof dp);
  dp[0]=0;
  for (int i=0; i<b; i++) {
    int w=0;
    for (int j=0; j<a&&i+j<=b; j++) {
      w=max(w,c[i+j].second);
      int v=dp[i]+w;
      if (v<dp[i+j+1]){
        dp[i+j+1]=v;
        p[i+j+1]=i;
      }
    }
  }
  cout<<"Total Time: "<<dp[b]<<endl;
  vector<int>t; int k=b;
  while(1){
    t.push_back(k);
    if (k==0) break;
    k=p[k];
  }
  reverse(t.begin(),t.end());
  for (int i=0; i<t.size()-1; i++){
    for (int j=t[i]; j<t[i+1]; j++) {
      cout<<c[j].first<<" ";
    }
    cout<<endl;
  }
}