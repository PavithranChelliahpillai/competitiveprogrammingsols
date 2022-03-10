#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
  int a,b,c; cin>>a>>b>>c;
  b=abs(pow(b,2)-a); c=abs(pow(c,2)-a);
  if (c>b) cout<<1<<endl;
  else cout<<2<<endl;
}