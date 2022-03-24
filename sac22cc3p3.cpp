#include <bits/stdc++.h>
using namespace std;
#define int long long 
#pragma GCC optimize("O2")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int r=1;
bool compare(pair<int,int> b,pair<int,int> c){
  int d = pow(10,r);
  b.first = b.first%d;
  c.first = c.first%d;
  return(b.first<c.first || (b.first==c.first && b.second<c.second));
}
int32_t main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
  int a; cin>>a; vector<pair<int,int>>b(a);
  for (int i=0; i<a; i++) {
      cin>>b[i].first;
      b[i].second = i;
  }
  int z=(*max_element(b.begin(),b.end())).first;
  for (int i=1; i<=floor(log10(z))+1; i++) {
    r=i;
    sort(b.begin(),b.end(),compare);
    for(int j=0;j<b.size()-1;j++) {
      cout << b[j].first << " ";
    }
    cout << b[b.size()-1].first << "\n";
  }
}