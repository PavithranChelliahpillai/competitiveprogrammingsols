#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin>>a;
  vector<int>c;
  for (int i=0; i<a; i++) {
    int b;
    cin>>b;
    c.push_back(b);
    string d;
    string e;
    cin>>d;
    cin>>e;
    for (int z=d.size()-1; z>0; z--) {
      cout<<e[z];
      cout<<d[z];
    }
    cout<<e[0]<<d[0]<<endl;
  }
}