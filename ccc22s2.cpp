#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define INF 0x3f3f3f3f
#define MAX 10000001
//#pragma GCC optimize("O2")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
unordered_map<int,int>e; int x=0,t=0;
int f(int a) {
  if (e[a]!=a) e[a]=f(e[a]); 
  return e[a];
}
void u(int a, int b) {
  if (e.count(a)==0) e[a]=a;
  if (e.count(b)==0) e[b]=b;
  if (e[f(a)]!=e[f(b)]) {e[f(b)]=f(a); x--;}
}
signed main() {
  hash<string>her;
  vector<pair<string,string>>z,y;
  int a; cin>>a; for (int i=0; i<a; i++) {
    string f,g; cin>>f>>g; z.push_back(make_pair(f,g));
  }
  int b; cin>>b; for (int i=0; i<b; i++) {
    string f,g; cin>>f>>g; y.push_back(make_pair(f,g));
  }
  int c; cin>>c; for (int i=0; i<c; i++) {
    string f,g,h; cin>>f>>g>>h; 
    u(her(f),her(g));
    u(her(g),her(h));
  }
  int x=0;
  for (int i=0; i<a; i++) {
    if (f(her(z[i].first))!=f(her(z[i].second)))x++;
  }
  for (int i=0; i<b; i++) {
    if (f(her(y[i].first))==f(her(y[i].second)))x++;
  }
  cout<<x<<endl;
}