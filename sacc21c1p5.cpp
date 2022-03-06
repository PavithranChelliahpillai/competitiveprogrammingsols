#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define INF 0x3f3f3f3f
#define MAX 1000005
#pragma GCC optimize("O2")
#pragma GCC optimize("trapv")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int e[MAX]; int s[MAX];  
int f(int a) {
  if (e[a]!=a) e[a]=f(e[a]); 
  return e[a];
}
void u(int a, int b) {
  a=f(a); b=f(b);
  if (e[a]==e[b]) return;
  s[b]+=s[a]; e[a]=f(b);
}
signed main(){ 
  int a,b; cin>>a>>b;
  for (int i=0; i<=a; i++) {e[i]=i; s[i]=1;}
  for (int i=0; i<b; i++) {
    int c; cin>>c;
    if (c==1) {
      int d,e; cin>>d>>e;
      u(d,e);
    }
    else if (c==2) {
      int d; cin>>d;
      cout<<s[f(d)]<<endl;
    }
  }
}