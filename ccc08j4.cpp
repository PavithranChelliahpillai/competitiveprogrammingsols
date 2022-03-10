#include <bits/stdc++.h>
using namespace std;
bool a(char b) {
  switch (b) {
    case '+':
    case '-':
    return true;
  }
  return false;
}
string b(string c) {
  stack<string>d; int e=c.size();
  for (int i=e-1; i>=0; i--) {
    if (a(c[i])) {
      string f=d.top(); d.pop();
      string g=d.top(); d.pop();
      string h=f+g+c[i]; d.push(h);
    }
    else d.push(string(1,c[i]));
  }
  return d.top();
}
int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(false);
  string x; getline(cin,x);
  x.erase(std::remove_if(x.begin(), x.end(), ::isspace), x.end());
  while (x!="0") {
    string y=b(x);
    for (int i=0; i<y.size(); i++) {
      cout<<y[i]<<" ";
      
    }
    cout<<endl; y.clear(); x.clear(); getline(cin,x);
    x.erase(std::remove_if(x.begin(), x.end(), ::isspace), x.end());
  }
}