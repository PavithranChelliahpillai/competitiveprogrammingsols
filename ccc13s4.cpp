#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>e(1000001);
bool h(int a,int b) {
  vector<bool>c(1000001);
  queue<int>d; d.push(a);
  c[a]=true;
  while (!d.empty()) {
    int u=d.front(); d.pop();
    for (auto &i: e[u]) {
      if (!c[i]) {c[i]=true; d.push(i);}
    }
  }
  if (c[b]) return true;
  else return false;
}
int main() {
  int a,b; cin>>a>>b; 
  for (int i=0; i<b; i++) {
    int c,d; cin>>c>>d;
    e[c].push_back(d);
 }
 int f,g; cin>>f>>g;
 if (h(f,g)) printf("yes\n");
 else if (h(g,f)) printf("no\n");
 else printf("unknown\n");
}