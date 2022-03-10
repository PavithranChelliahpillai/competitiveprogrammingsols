#include <bits/stdc++.h>
using namespace std;
vector<int>c; int d; bool f=false,n=false;
int main() {
  int a; cin>>a;
  for (int i=0; i<a; i++) {
    string a,b; cin>>a>>b; f=false; n=false;
    if (a==b) {cout<<"YES"<<endl; continue;}
    int c=0,d=0;
    for (int j=0; j<a.size(); j++) {
      if (a[j]=='B') c++;
    }
    for (int j=0; j<b.size(); j++) {
      if (b[j]=='B') d++;
    }
    if (d<c) {cout<<"NO"<<endl; continue;}
    if ((d-c)%2==1) {reverse(a.begin(),a.end()); f=true;}
    int g=b.find(a,0);
    if (g==string::npos) {cout<<"NO"<<endl; continue;}
    while (g!=string::npos&&!n) {
      c=0; d=0; int k=g,m=0; int l=k+int(a.size()-1);
      g=b.find(a,g+1);
      for (int j=0; j<k; j++) {
        if (b[j]=='B') c++;
        else m++;
      }
      for (int j=l+1; j<b.size(); j++) {
        if (b[j]=='B') d++;
      }
      if (f) {
        if (l+1!=b.size()-1&&b[l+1]=='A') continue;
        if (c>d||d-c!=1) continue;
      }
      else {
        if (k-1!=-1&&b[k-1]=='A') continue;
        if (c!=d) continue;
      }
      cout<<"YES"<<endl; n=true;
    }
    if (!n)cout<<"NO"<<endl;
  }
}