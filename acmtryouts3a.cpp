#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin>>a;
  vector<int>c;
  vector<int>d;
  for (int i=0; i<a; i++) {
    int b;
    cin>>b;
    for (int i=0; i<b; i++) {
      int d;
      cin>>d;
      c.push_back(d);
    }
    sort(c.begin(), c.end());
    d.push_back(c[0]);
    if (c.size()>1) {
    d.push_back(c[c.size()-1]);
    }
    else {
      d.push_back(c[0]);
    }
    c.clear();
  }
  for (int i=0; i<d.size(); i++) {
    cout<<d[i]<<" "<<d[i+1]<<endl;
    i++;
  }
}