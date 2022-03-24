#include <bits/stdc++.h>
using namespace std;
#define int double
#pragma GCC optimize("O2")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")

int32_t main() {
  int a; cin>>a;
  cout<<setprecision(7)<<(5+sqrt((25-4*12*(1-a))))/(2*12)<<endl;
}