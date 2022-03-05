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
  cin>>x>>t;
  for (int i=0; i<t; i++) {
    int c,d; cin>>c>>d;
    u(c,d);
  }
  cout<<x<<endl;
}