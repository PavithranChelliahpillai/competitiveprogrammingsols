#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
  int a; cin>>a; vector<int>b(a);
  for (int i=0; i<a; i++) cin>>b[i];
  sort(b.begin(),b.end());
  int c=a/2;
  if (a%2) {
    for (int i=0; i<c; i++) cout<<b[c-i]<<" "<<b[c+i+1]<<" ";
    cout<<b[0];
  }  
  else for (int i=0; i<c; i++) cout<<b[c-i-1]<<" "<<b[c+i]<<" ";
}