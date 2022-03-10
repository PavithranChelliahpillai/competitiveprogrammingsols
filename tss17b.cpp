#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c; vector<int>d,e; cin>>a>>b; vector<int>h(1414215);
  for (int i=0; i<a; i++) {
    int f,g; cin>>f>>g;
    d.push_back(f); e.push_back(g);
    h[int(ceil(sqrt(pow(f,2)+pow(g,2))))]++;
  }
  for (int i=1; i<1414215; i++) {
    h[i]+=h[i-1];
  }
  for (int i=0; i<b; i++) {
    int f; cin>>f;
    cout<<h[f]<<endl;
  }
}