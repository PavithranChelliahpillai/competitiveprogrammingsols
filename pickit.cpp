#include <bits/stdc++.h>
using namespace std;
int x[220]; int y[220][220];
int z(int a, int b) {
  if (a==b) return 0;
  if (y[a][b]!=-1) return y[a][b];
  int c=0;
  for (int i=a+1; i<=b-1; i++) c=max(c,x[a]+x[b]+x[i]+z(a,i)+z(i,b));
  return y[a][b]=c;
}
int main() {
  while (true) {
    int a; cin>>a; if (a==0) return 0;
    for (int i=0; i<a; i++) cin>>x[i];
    memset(y,-1,sizeof y); cout<<z(0,a-1)<<endl;
  }
}