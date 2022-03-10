#include <bits/stdc++.h>
using namespace std;
int main() {
  int asize,x;
  bool  al[150][150];
  queue<int>d;
  cin>>asize;
  vector<int>z(asize+1,100000);
  for (int i=1; i<=asize; i++) {
    for (int j=1; j<=asize; j++) {
      cin>>al[i][j];
    }
  }
  d.push(1);
  z[1]=0;
  while (!d.empty()) {
    x=d.front();
    d.pop();
    for (int i=1; i<=asize; i++) {
      
      if (al[x][i]!=0) {
                if (z[i]==100000) {
        d.push(i);
        }
        z[i]=min(z[i],z[x]+1);
        if (i==asize) {
          cout<<z[asize];
          return 0;
        }

      }
    }
  }
  cout<<z[asize];
}