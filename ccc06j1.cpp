#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,f,g,h;
  map<int,int>b;
  b[1]=461;
  b[2]=431;
  b[3]=420;
  b[4]=0;
  map<int,int>c;
  c[1]=100;
  c[2]=57;
  c[3]=70;
  c[4]=0;
  map<int,int>d;
  d[1]=130;
  d[2]=160;
  d[3]=118;
  d[4]=0;
  map<int,int>e;
  e[1]=167;
  e[2]=266;
  e[3]=75;
  e[4]=0;
  
  cin>>a>>f>>g>>h;
  int i = b[a]+c[f]+d[g]+e[h];
  cout<<"Your total Calorie count is "<<i<<".";
}