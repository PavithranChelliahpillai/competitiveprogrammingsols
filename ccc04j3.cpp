#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b;
  cin>>a>>b;
  string c,d;
  vector<string>e;
  vector<string>f;
  for (int i=0; i<a; i++) {
    cin>>c;
    e.push_back(c);
  }
  for (int i=0; i<b; i++) {
    cin>>d;
    f.push_back(d);
  }
  for (int i=0; i<a; i++) {
    for (int j=0; j<b; j++) {
      cout<<e[i]<<" as "<<f[j]<<endl;
    }
  }
}