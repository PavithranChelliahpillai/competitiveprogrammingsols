#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  int b;
  cin>>a>>b;
  vector<int>z(a+1,0);
  for (int i=1; i<=b; i++) {
    int c,d,e;
    cin>>c>>d>>e;
    z[c]+=e;
    z[d+1]-=e;
  }
  int p;
  cin>>p;

  for(int i=1; i<z.size(); i++) {
    z[i]+=z[i-1];
  }

    for(int i=1; i<z.size(); i++) {
    z[i]+=z[i-1];
  }
  int x=0;
  int y=1;
  int m=-1;
  while (x<y && y<z.size()) {
    if(z[y]-z[x]<=p) {
      m=max(m,y-x);
      y++;
    }
    else {
      x++;
    }
  }
  cout<<max(m,0);
}