#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c,l=0;
  cin>>a>>b>>c;
  vector<int>d(a+1,0);
  for (int i=0; i<c; i++) {
    int x,y,z;
    cin>>x>>y>>z;
    d[x]+=z;
    d[y+1]-=z;
  }
  for(int i=1; i<d.size(); i++) {
    d[i]+=d[i-1];
  }
  for (int i=1; i<=a; i++) {
    if(d[i]<b) {
      l++;
    }
  }
  cout<<l;
}