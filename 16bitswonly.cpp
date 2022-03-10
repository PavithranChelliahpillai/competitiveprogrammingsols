#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  vector<string>e;
  cin>>a;
  string one="POSSIBLE DOUBLE SIGMA";
  string two="16 BIT S/W ONLY";
  long long b,c,d;
  for (int i=0; i<a; i++) {
  cin>>b>>c>>d;
  if (b*c==d) {
    e.push_back(one);
  }
  if (b*c!=d) {
    e.push_back(two);
  }
  }
  for (int z=0; z<e.size(); z++) {
    cout<<e[z]<<endl;
  }
}