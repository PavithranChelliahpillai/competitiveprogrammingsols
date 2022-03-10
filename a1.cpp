#include <bits/stdc++.h>
using namespace std;
int main() {
  int a; cin>>a; string b;
  for (int i=0; i<a; i++) {
    int c; cin>>c;getline(cin,b); //c--; 
    string s=""; 
    cout<<i+1<<" ";
    for (int j=1; j<b.size(); j++) {
      if (j!=c) {
        s+=b[j];
      }
    }
    cout<<s<<endl;
  }
}