#include <bits/stdc++.h>
using namespace std;
int main() {
  string a; vector<string>b;
  while (true){
    cin>>a; if (a=="X")break; b.push_back(a);
  }
  for (int i=0; i<b.size(); i++) {
    while (true) {
      int a=b[i].find("ANA");
      int c=b[i].find("BAS");
      if (a==-1&&c==-1) break;
      if (a!=-1&&b[i][a-1]!='A')b[i].replace(a,3,"A");
      else if (a!=-1) break;
      else if (c!=-1)b[i].replace(c,3,"A");
    }
    if (b[i]=="A") cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}