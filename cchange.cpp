#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c;
  cin>>a>>b;
  vector<int>e(10005,1e5);
  vector<int>d;
  for (int i=0; i<b; i++) {
    cin>>c;
    d.push_back(c);
  }
  e[0]=0;
  for (int i=1; i<=a; i++) {
    for(int j=0; j<d.size(); j++) {
      if (i-d[j]>=0) {
        e[i]=min(e[i],e[i-d[j]]+1); 
      }
    }
  }
  cout<<e[a];
}