#include <bits/stdc++.h>
using namespace std;
int main() {
  int x1=0, y1=0;
  int x2=0, y2=0;
  int x3=0, y3=0;
  int x4=0, y4=0;
  int a=0; cin>>a;
  int c; cin>>c;
  bool b[a+1][a+1];
  for (int i=0; i<a; i++) {
    for (int j=0; j<a; j++) {
      b[i][j]=true;
    }
  }
  for (int k=0; k<c; k++) {
    int x,y; cin>>x>>y;
    x--; y--;
    for (int i=0; i<a; i++) {
      b[x][i]=false;
    }
    for (int i=0; i<a; i++) {
      b[i][y]=false;
    }
    x1=0; y1=0;
    while (x+x1<a && y+y1<a) {
      b[x+x1][y+y1]=false;
      x1++; y1++;
    }
    x2=0; y2=0;
    while (x-x2>=0 && y-y2>=0) {
      b[x-x2][y-y2]=false;
      x2++; y2++;
    }
    x3=0; y3=0;
    while (x-x3>=0 && y+y3<a) {
      b[x-x3][y+y3]=false;
      x3++; y3++;
    }
    x4=0; y4=0;
    while (x+x4<a && y-y4>=0) {
      b[x+x4][y-y4]=false;
      x4++; y4++;
    }
  }
  int z=0;
  for (int i=0; i<a; i++) {
    for (int j=0; j<a; j++) {
      if (b[i][j]==true) {
        z++;
      }
    }
  }
  cout<<z;
}