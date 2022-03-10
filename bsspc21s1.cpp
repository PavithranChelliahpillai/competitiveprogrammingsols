#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b; cin>>a>>b; char c[a][b];
  for (int i=0; i<a; i++) {
    for (int j=0; j<b; j++) {
      cin>>c[i][j];
    }
  }
  for (int i=0; i<a; i++) {
    int d=b-1;
    for (int j=0; j<ceil(b/2); j++) {
      if (c[i][j]==c[i][d]) {d--; continue;}
      if (c[i][j]=='.') {c[i][j]=c[i][d]; d--; continue;}
      if (c[i][d]=='.') {c[i][d]=c[i][j]; d--; continue;}
      cout<<-1; return 0; 
    }
  }
  for (int i=0; i<b; i++) {
    int d=a-1;
    for (int j=0; j<ceil(a/2); j++) {
      if (c[j][i]==c[d][i]) {d--; continue;}
      if (c[j][i]=='.') {c[j][i]=c[d][i]; d--; continue;}
      if (c[d][i]=='.') {c[d][i]=c[j][i]; d--; continue;}
      cout<<-1; return 0; 
    }
  }
  for (int i=0; i<a; i++) {
    for (int j=0; j<b; j++) {
      if (c[i][j]!='.')cout<<c[i][j];
      else cout<<'a';
    }
    cout<<endl;
  }
}