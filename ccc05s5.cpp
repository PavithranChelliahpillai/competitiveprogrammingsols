#include<bits/stdc++.h>
using namespace std;
#define int long long int
int bit[100005];
void updt(int i,int a) {
  while(i<=a) {
    bit[i]++;
    i=i+(i&-i);
  }
}
int sum(int i) {
  int z = 0;
  while(i>0) {
    z+=bit[i];
    i=i-(i&-i);
  }
  return z;
}
int32_t main() {
  cin.sync_with_stdio(false); int e=0;
  cin.tie(NULL); memset(bit,0,sizeof(bit));
  int a; cin>>a; vector<int>b,d; map<int,int>m;
  for (int i=0; i<a; i++) {
    int c; cin>>c; b.push_back(c); d.push_back(c);
  }
  sort(b.begin(),b.end());
  for (int i=0; i<a; i++) m[b[i]]=i+1;
  for (int i=0; i<a; i++) {
    updt(m[d[i]],a);
    e+=sum(a)-sum(m[d[i]])+1;
  }
  long double r=double(e)/a;
  std::cout<<std::fixed;
  std::cout<<std::setprecision(2);
  cout<<r<<endl;
}
