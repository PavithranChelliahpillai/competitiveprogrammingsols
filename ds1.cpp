#include<bits/stdc++.h>

using namespace std;

long long bit[100005];
long long frq[100001];
vector<long long> n;
int a,b;

void updt(int i,int v) {
  while(i<=a) {
    bit[i] += v;
    i=i+(i&-i);
  }
}

void updtfrq(int i,int v) {
  while(i<=100000) {
    frq[i]+=v;
    i=i+(i&-i);
  }
}

long long frqsum(int i) {
  long long z = 0;
  while(i>0) {
    z+=frq[i];
    i=i-(i&-i);
  }
  return z;
}

long long sum(int i) {
  long long z = 0;
  while(i>0) {
    z+=bit[i];
    i=i-(i&-i);
  }
  return z;
}

int main() {
  cin.sync_with_stdio(false);
  cin.tie(NULL);
  memset(frq,0,sizeof(frq));
  cin>>a>>b;
  int g,h,j,k;
  n.resize(a);
  for(int i=0;i<a;i++) {
    cin >> n[i];
    updt(i+1,n[i]);
    updtfrq(n[i],1);
  }
  for(int i=0;i<b;i++) {
    string z; cin>>z;
    if (z=="C") {
      cin>>g>>h; updt(g,h-n[g-1]); updtfrq(h,1); updtfrq(n[g-1],-1); n[g-1]=h; 
    }
    else if (z=="S") {
      cin>>j>>k; cout<<sum(k)-sum(j-1)<<"\n";
    }
    else if (z=="Q") {
      cin>>h; cout<<frqsum(h)<<"\n";
    }
  }
}