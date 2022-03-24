#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define INF 0x3f3f3f3f
//#pragma GCC optimize("O2")
//#pragma GCC optimize("unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
const int MAX=2e5+5;
int a,b;
void updt(int i,int v, int bit[]) {
  while(i<=a) {
    bit[i] += v;
    i=i+(i&-i);
  }
}
void updtfrq(int i,int v, int frq[]) {
  while(i<=100000) {
    frq[i]+=v;
    i=i+(i&-i);
  }
}
int frqsum(int i, int frq[]) {
  int z = 0;
  while(i>0) {
    z+=frq[i];
    i=i-(i&-i);
  }
  return z;
}
int sum(int i, int bit[]) {
  int z = 0;
  while(i>0) {
    z+=bit[i];
    i=i-(i&-i);
  }
  return z;
}
int32_t main(){
  cin>>a>>b; pair<int,int>c[MAX]; int bit[MAX],bitot[MAX]; pair<pair<int,int>,pair<int,int>>d[MAX]; int z[MAX];
  for (int i=1;i<=a;i++) {
    cin>>c[i].first; c[i].second=i;
    updt(c[i].second,c[i].first,bitot);
  }
  sort(c+1,c+a+1);
  for (int i=1;i<=b;i++) {
    cin>>d[i].second.first>>d[i].second.second>>d[i].first.first;
    d[i].first.second=i;
  }
  sort(d+1,d+b+1);
  int idx=1;
  for (int i=1; i<=b; i++) {
    int l=d[i].second.first,r=d[i].second.second,k=d[i].first.first;
    while (idx<=a&&c[idx].first<k) {
      updt(c[idx].second,c[idx].first,bit);
      idx++;
    }
    z[d[i].first.second]=(sum(r,bitot)-sum(l-1,bitot))-2*(sum(r,bit)-sum(l-1,bit));
  }
  for (int i=1; i<=b; i++) {
    cout<<z[i]<<endl;
  } 
}