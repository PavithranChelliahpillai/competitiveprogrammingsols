#include <bits/stdc++.h>
using namespace std;
int main() {
  cout<<"Ready \n";
  string a;
  while (true) {
    getline(cin,a);
    if (a=="  ") {
      break;
    }
    if (a=="pq" || a=="qp" || a=="bd" || a=="db") {
      cout<<"Mirrored pair \n";
    }
    else {
      cout<<"Ordinary pair \n";
    }
  }
}