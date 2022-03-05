#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define INF 0x3f3f3f3f
#define MAX 1000005
//#pragma GCC optimize("O2")
//#pragma GCC optimize("unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int e[MAX]; vector<int>m;
int f(int a) {
  if (e[a]!=a) e[a]=f(e[a]); 
  return e[a];
}
void u(int a, int b, int v) {
  a=f(a); b=f(b);
  if (e[a]!=e[b]) {e[f(b)]=f(a); m.push_back(v+1);}
}
int32_t main(){ 
  int a,b; cin>>a>>b;  
  for (int i=1; i<=b; i++) e[i]=i;
  for (int i=0; i<b; i++) {
    int g,f; cin>>g>>f;
    u(g,f,i);
  }
  for (int i=1; i<=a; i++) {
    if (f(i)!=f(1)) {
      cout<<"Disconnected Graph"<<endl; return 0;
    }
  }
  for (auto i:m) cout<<i<<endl;
}