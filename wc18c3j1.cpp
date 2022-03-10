#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c;
  cin>>a>>b>>c;
  int d = (floor(a/b));
  cout<<(d*c)+a-(d*b);
}