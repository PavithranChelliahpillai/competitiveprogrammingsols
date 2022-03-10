#include <bits/stdc++.h>
using namespace std;
int main() {
  int a; cin>>a; vector<float>b(a);
  for (int i=0; i<a; i++) cin>>b[i];
  int c; cin>>c;
  while (c!=77) {
    if (c==99) {
      int d,e; cin>>d>>e; 
      b.insert(d+b.begin(),b[d-1]*(100-e)/100);
      b[d-1]*=e; b[d-1]/=100;
    }
    else if (c==88) {
      int d; cin>>d;
      b[d-1]+=b[d]; b.erase(b.begin()+d);
    }
    cin>>c;
  }
  for (auto i:b) cout<<i<<" ";
}