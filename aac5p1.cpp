#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b=0,d=0; cin>>a;
  for (int i=0; i<a; i++) {
    int c; cin>>c;
    if (c%2) b++; else d++;
  }
  cout<<floor(b/2)+floor(d/2)<<endl;
}