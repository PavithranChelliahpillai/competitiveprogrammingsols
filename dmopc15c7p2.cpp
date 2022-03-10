#include <bits/stdc++.h>
using namespace std;
int main() {
  string a; getline(cin,a);
  int b=1;
  for (int i=0; i<a.size(); i++) {
    if (a[i]==' '){
      b++;
    }
  }
  cout<<b;
}