#include <bits/stdc++.h>
using namespace std;
int main() {
  string a,b; cin>>a>>b; vector<int>c(91); int d=0;
  for (int i=0; i<a.size(); i++)c[int(a[i])]++;
  for (int i=0; i<b.size(); i++)c[int(b[i])]--;
  for (int i=0; i<c.size(); i++){if(c[i]>0)d+=c[i];}cout<<d<<endl;
}