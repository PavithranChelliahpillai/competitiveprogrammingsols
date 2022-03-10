#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin>>a;
  vector<string>n;
  string b;
  for (int i=0; i<a; i++) {
    cin>>b;
    while(b.find("-")!=string::npos) {
    b.erase(b.find("-"),1);
    }
    b.erase(10,100);
    for (int i=0; i<10; i++) {
      if (isdigit(b[i])){
        
      }
      else {
        if (b[i]=='A' || b[i]=='B'|| b[i]=='C') {
          b.replace(i,1,"2");
        }
        else if (b[i]=='D' || b[i]=='E'|| b[i]=='F') {
          b.replace(i,1,"3");
        }
        else if (b[i]=='G' || b[i]=='H'|| b[i]=='I') {
          b.replace(i,1,"4");
        }
        else if (b[i]=='J' || b[i]=='K'|| b[i]=='L') {
          b.replace(i,1,"5");
        }
        else if (b[i]=='M' || b[i]=='N'|| b[i]=='O') {
          b.replace(i,1,"6");
        }
        else if (b[i]=='P' || b[i]=='Q'|| b[i]=='R'||b[i]=='S') {
          b.replace(i,1,"7");
        }
        else if (b[i]=='T' || b[i]=='U'|| b[i]=='V') {
          b.replace(i,1,"8");
        }
        else if (b[i]=='W' || b[i]=='X'|| b[i]=='Y'||b[i]=='Z') {
          b.replace(i,1,"9");
        }
      }
    }
    n.push_back(b);
  }
  for (int i=0; i<n.size(); i++) {
    cout<<n[i][0]<<n[i][1]<<n[i][2]<<"-"<<n[i][3]<<n[i][4]<<n[i][5]<<"-"<<n[i][6]<<n[i][7]<<n[i][8]<<n[i][9]<<endl;
  }
}