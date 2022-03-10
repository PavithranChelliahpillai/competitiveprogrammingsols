#include <bits/stdc++.h>
using namespace std;
int main() {
  int a; cin>>a;
  for (int i=0; i<a; i++) {
    int b=0,c=0,d=0,e=0,f,g; cin>>b;
    cout<<"Round 0: "<<b<<" undefeated, 0 one-loss, 0 eliminated"<<endl;
    while (b+c>1) {
      e++;
      if (b==1 && c==1) {
        b--; c++;
      }
      else {
        f=c; g=b;
        c/=2; d+=c; b/=2; c+=b;
        if (f%2) c++;
        if (g%2) b++;
      }
      cout<<"Round "<<e<<": "<<b<<" undefeated, "<<c<<" one-loss, "<<d<<" eliminated"<<endl;
    }
    cout<<"There are "<<e<<" rounds."<<endl<<endl;
  }
}