#include <bits/stdc++.h>
using namespace std;
int z(int a, int b){
  if(a==0)return a;
  if(b==0)return b;
  if (a == b)return a;
  if (a > b)return z(a-b, b);
  return z(a, b-a);
}
int main() {
  int a,b,y; cin>>a>>b; y=int(a/b);
  if (a==0) cout<<a;
  else if (y!=0) cout<<y;
  if ((a-y)%b) {
    if(y!=0) cout<<" ";
    if (a-y>0) {
      int c=z(a-y*b,b); 
      cout<<(a-y*b)/c<<"/"<<b/c;
    }
    else cout<<0<<"/"<<b;
  }
  cout<<endl;
}