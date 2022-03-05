#include <bits/stdc++.h>
using namespace std;
int main() {
  string c,d; 
  for (int k=0; k<5; k++) {
  cin>>c; d=c; reverse(d.begin(),d.end()); int a=c.size(), b=c.size();
  int f[a+1][b+1];
  for (int i=0; i<=a; i++) {
    for (int j=0; j<=b; j++) {
      if (i==0 || j==0) {
        f[i][j]=0;
      }
      else if (c[i-1]==d[j-1]) {
        f[i][j]=f[i-1][j-1]+1;
      }
      else {
        f[i][j]=max(f[i-1][j],f[i][j-1]);
      }
    }
  }
  cout<<f[a][b]<<endl;
  }
}