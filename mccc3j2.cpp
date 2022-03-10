#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
  int a,b; string c; cin>>a>>b>>c; vector<int>d;
  for (int i=0; i<a; i++) {
    if (c[i]=='U'&&b>0)b--;
    else if (c[i]=='D')b++;
    d.push_back(b);
  }
  int e=count(d.begin(),d.end(),0);
  cout<<e<<endl;
}