#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c;
  cin>>a>>b>>c;
  string f;
  cin>>f;
  string g;
  string n;
  string x,y;
  for (int i=0; i<f.size(); i++) {
    if (f[i]=='y') {
      g.push_back('C');
      n.push_back('V');
    }
    else if (f[i]=='a' || f[i]=='e' || f[i]=='i' || f[i]=='o' || f[i]=='u') {
      g.push_back('V');
      n.push_back('V');
    }
    else {
      g.push_back('C');
      n.push_back('C');
    }
  }
  for (int i=0; i<b+1; i++) {
    x.push_back('C');
  }
  for (int i=0; i<c+1; i++) {
    y.push_back('V');
  }
  if (g.find(x)!=string::npos) {
    cout<<"NO"<<endl;
  }
  else if (n.find(y)!=string::npos) {
    cout<<"NO"<<endl;
  }
  else {
    cout<<"YES"<<endl;
  }
}