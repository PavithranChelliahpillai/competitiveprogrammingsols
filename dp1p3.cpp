#include <bits/stdc++.h>
using namespace std;
int LIS(int a[],int b) {
  int c[b];
  c[0]=1;
  for (int i=1; i<b; i++) {
    c[i]=1;
    for (int j=0; j<i; j++) {
      if (a[i]>a[j] && c[i]<c[j]+1) {
        c[i]=c[j]+1;
      }
    }
  }
  return *max_element(c,c+b);
}
int main() {
  int a; cin>>a; int b[a];
  for (int i=0; i<a; i++) {
    cin>>b[i];
  }
  cout<<LIS(b,a);  
}