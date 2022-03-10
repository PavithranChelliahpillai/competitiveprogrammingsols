#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
  int a,b; cin>>a>>b; vector<int>c;
  for (int i=0; i<b; i++) {
    int d; cin>>d; c.push_back(d);
  }
  sort(c.begin(),c.end());
  int i=0,j=0;
  while (j+c[i]<=a) {
    j+=c[i]; i++;
    if (i==a) break;
  }
  cout<<i<<endl;
}