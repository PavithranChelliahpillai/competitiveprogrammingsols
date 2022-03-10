#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<long long>a(100005,0);
  long long b;
    long long d;
  cin>>b>>d;
  for (int i=0; i<b; i++) {
    long long c;
    cin>>c;
    a[c]++;
  }

  for (int i=0; i<d; i++) {
    long long e;
    cin>>e;
    if (e==1) {
      long long x;
      cin>>x;
      if(x%2==0) {
        a[x/2]+=2*a[x];
      } else {
        a[x/2] += a[x];
        a[x/2+1] += a[x];
      }
      a[x] = 0;
    }
    else if (e==2) {
      long long y;
      cin>>y;
      cout<<a[y]<<endl;
    }
  }
}