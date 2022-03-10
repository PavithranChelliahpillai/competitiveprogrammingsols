#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<string>a(10); int c;
  for (int i=0; i<10; i++) cin>>a[i]; cin>>c; 
  for (int i=0; i<c; i++) {
    int d; cin>>d;
    cout<<a[d];
  }
}