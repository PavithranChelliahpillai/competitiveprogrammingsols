#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int x;
  vector<int>a;
  vector<int>b;
  for (int i=0; i<n; i++) {
    cin>>x;
    a.push_back(x);     
  }
  for (int z=0; z<a.size(); z++) {
    if (a[z]<=100) {
      b.push_back(a[z]);
    }
  }
  sort(b.begin(), b.end(), greater<int>()); 
  if (b.size()==0) {
    cout<<"0";
  }
  else if (b.size()==1) {
    int h = b[0];
    cout<<h;
  }
  else if (b.size()>=2) {
    int g=b[0]+b[1];
    cout<<g;
  }
}