#include <bits/stdc++.h>
using namespace std;
int main() {
  int a=0; cin>>a;
  string b[6]={"WELCOME","TO","CCC","GOOD","LUCK","TODAY"};
  int c=0,d=-1,e=0,k=0;
  while (true) {
    if (d+b[c].size()+1<=a && c<6) {
      d+=b[c].size()+1;
      k+=b[c].size();
      c++;
    }
    else {
      if (c-e>1) {
      int f=a-k,g=int(f/(c-e-1)),h=f%(c-e-1);
      while (e<c) {
        cout<<b[e];
        for (int i=0; i<g; i++) {if (e+1<c){cout<<'.';}}
        if (h>0) {cout<<'.'; h--;}
        e++;
      }
      cout<<endl; e=c; d=-1; k=0;  
      }
      else {
        int f=a-k;
        cout<<b[e];
        for (int i=0; i<f; i++) cout<<'.'; cout<<endl; e=c; d=-1; k=0; 
      }
    }
    if (e==6 ||c==7) return 0;
  }
  
}