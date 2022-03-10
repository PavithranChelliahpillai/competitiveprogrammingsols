#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b;
  cin>>a>>b;
  vector<pair<int,int>>d;
  for (int i=0; i<a; i++) {
    int c;
    cin>>c;
    d.push_back(make_pair(c%b,c));
  }
  sort(d.begin(),d.end());
  for (int i=0; i<a; i++) {
    cout<<d[i].second<<" ";
  }
}