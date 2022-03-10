#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
  int a,b; cin>>a>>b; vector<int>d; 
  for (int i=0; i<a; i++) {
    int c; cin>>c;
    d.push_back(c);
  }
  vector<int>e(a+1);
  for (int i=0; i<a; i++) e[d[i]]=i;
  for (int i=0; i<a&&b; i++) {
    if(d[i]==a-i) continue;
    int z=e[a-i];
    e[d[i]]=e[a-i];
    e[a-i]=i;
    swap(d[z],d[i]);
    b--;
  }
  for (int i=0; i<a; i++) {
    cout<<d[i]<<" ";
  }
}