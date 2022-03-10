#include <bits/stdc++.h>
using namespace std;
int main() {
  int a; cin>>a; string d;
  for (int i=0; i<a; i++) {
    int b,c; cin>>b>>c;
    cout<<"The bit patterns are"<<endl;
    for (int j=0; j<c; j++) d+='1';
    for (int j=0; j<b-c; j++) d+='0';
    cout<<d<<endl;
    auto e=d.rfind("10");
    while (e!=string::npos) {
      auto f=d.rfind("1");
      reverse(d.begin()+e,d.begin()+e+2);
      reverse(d.begin()+e+2,d.end());
      cout<<d<<endl;
      e=d.rfind("10");
    }
    cout<<endl;
    d.clear();
  }
}