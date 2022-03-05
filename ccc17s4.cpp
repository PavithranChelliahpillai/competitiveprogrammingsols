#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define INF 0x3f3f3f3f
#define MAX 1000005
#pragma GCC optimize("O2")
#pragma GCC optimize("trapv")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
bool compare(pair<pair<int,int>,pair<int,int>>a,pair<pair<int,int>,pair<int,int>>b){
  if(a.second.first==b.second.first){
    if (a.second.second<b.second.second) return true;
    else return false;
  }
  else if(a.second.first<b.second.first)
  return true;
  else
  return false;
}
int e[MAX];  bool m[MAX]; map<pair<int,int>,int>k; int p=0,r=0; int h=0;
int f(int a) {
  if (e[a]!=a) e[a]=f(e[a]); 
  return e[a];
}
void u(int a, int b, int z, int y) {
  if (e[f(a)]!=e[f(b)]) {
    e[f(b)]=f(a); 
    if(k[make_pair(a,b)]>z-1) m[k[make_pair(a,b)]]=true; 
    h=max(y,h);
  }
}
signed main(){ 
  int a,b,c; cin>>a>>b>>c; vector<pair<pair<int,int>,pair<int,int>>>l;
  for  (int i=0; i<b; i++) {
    int e,f,g; cin>>e>>f>>g;
    l.push_back(make_pair(make_pair(e,f),make_pair(g,i)));
    k[make_pair(e,f)]=i+1;
  }
  for (int i=0; i<=b; i++) m[i]=false;  
  sort(l.begin(),l.end(),compare);
  for (int i=1; i<=a; i++) e[i]=i;
  for (int i=0; i<l.size(); i++) u(l[i].first.first,l[i].first.second,a,l[i].second.first);
  
  for (int i=1; i<=b; i++) {
    if (m[i]) p++;
  }
////////////
//cout<<h<<endl;
  for (int i=0; i<=a; i++) e[i]=i;
  if (c>0) {
    for (int i=0; i<l.size(); i++) {
        if (f(l[i].first.first)!=f(l[i].first.second)) {
        int ind=k[l[i].first];
        //cout<<ind<<endl;
        if (l[i].second.first<h) {
          u(l[i].first.first,l[i].first.second,INT_MAX,0);
        }
        else if (l[i].second.first==h&&ind<=a-1) {
          u(l[i].first.first,l[i].first.second,INT_MAX,0);  
        }
        else if (ind<=a-1&&l[i].second.first<=c) {
          p--; cout<<p<<endl; return 0;
        }
      }
    }
  }
  cout<<p<<endl;
}