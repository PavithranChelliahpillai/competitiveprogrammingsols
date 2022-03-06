#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define INF 0x3f3f3f3f
#define MAX 10000001
#pragma GCC optimize("O2")
#pragma GCC optimize("trapv")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int32_t main(){
  int a,b; cin>>a>>b;
  if (b>a) {cout<<"-1\n"; return 0;}
  b=a-b;
  if (b%2) cout<<"-1\n";
  else {
    int r=a;
    auto c=[&](int z) {
      r--; cout<<z+2;
      if (r!=0) cout<<' ';
    };
    for (int i=0; i<b/2; i++) c(0),c(1);
    for (int i=0; i<a-b; i++) c(0);
    cout<<endl;
  }
}