#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
  int a; cin>>a; vector<int>c;
  for (int i=0; i<a; i++) {
    int b; cin>>b; c.push_back(b);
  }
  int d=c[0],e=0,f;
  for (int i=1; i<a; i++) {
    f=(d>e)?d:e;
    d=e+c[i]; e=f;
  }
  cout<<max(d,e)<<endl;
}