#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin>>a;
  vector<int>b;
  for (int i=0; i<a; i++) {
    int c;
    cin>>c;
    b.push_back(c);
  }
  sort(b.begin(), b.end());
  for (int i=0; i<a; i++) {
    cout<<b[i]<<endl;
  }
}