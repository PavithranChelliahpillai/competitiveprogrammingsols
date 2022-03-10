#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b; cin>>a>>b;
  int c[a+1][a+1]; int m[a+1][a+1];
  for (int i=0; i<=a; i++) {
    for (int j=0; j<=a; j++) {
      c[i][j]=0; m[i][j]=0;
    }
  }
  for (int i=0; i<b; i++) {
    int d,e,f; cin>>d;
    if (d==1) {
      cin>>e>>f;
      m[e][f]++;
    }
    else if (d==2) {
      int g,h; cin>>e>>f>>g>>h;
      for (int j=e; j<=g; j++) {
        for (int k=f; k<=h; k++) {
          if (m[j][k]>0) c[j][k]+=m[j][k];
        }
      }
    }
  }
  int z=0;
  for (int i=1; i<=a; i++) {
    for (int j=1; j<=a; j++) {
      z+=c[i][j];
      //cout<<c[i][j];
    }
    //cout<<endl;
  }
  cout<<z<<endl;
}