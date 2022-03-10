#include <bits/stdc++.h>
using namespace std;
char a(string b, string c) {
  int d=0,e=0,f=0;
  for (; d<b.size(); d++) {
    e+=b[d]; f+=c[d];
  }
  f+=c[c.size()-1];
  return(char)f-e;
}
int main() {
  cin.sync_with_stdio(false);
  cin.tie(NULL);
  string c,b; cin>>c>>b;
  putchar(a(b,c));
}