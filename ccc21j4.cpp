#include <bits/stdc++.h>
using namespace std;
struct section {
  int l=0;
  int m=0; 
  int s=0;
  void add (char group) {
    if (group=='L') {
      l++;
    }
    else if (group=='M') {
      m++;
    }
    else if (group=='S') {
      s++;
    }
  }
};
int solve (string z){
  section total;
  for (int i=0; i<z.size(); i++) {
    total.add(z[i]);
  }
  section l,m,s;
  int j=0;
  for (int i=0; i<total.l; i++) {
    l.add(z[j]);
    j++;
  }
  for (int i=0; i<total.m; i++) {
    m.add(z[j]);
    j++;
  }
  for (int i=0; i<total.s; i++) {
    s.add(z[j]);
    j++;
  }
  int min_swaps=INT_MAX;
  for (int i=0; i<z.size(); i++) {
    int swaps = l.m + l.s+ m.l+ m.s - min(l.m,m.l);
    min_swaps=min(min_swaps,swaps);
  }
  return min_swaps;
}
int main() {
  string a;
  cin>>a;
  int answer=solve(a);
  cout<<answer<<endl;
}