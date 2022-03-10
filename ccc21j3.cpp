#include <bits/stdc++.h>
using namespace std;
int main() {
  string a;
  bool rl=true;
  cin>>a;
  while (a!="99999") {
    string b;
    string c;
    int d;
    int e;
    b.push_back(a[0]);
    c.push_back(a[1]);
    stringstream ss;
    stringstream bb;
    ss<<b;
    ss>>d;
    bb<<c;
    bb>>e;
    int f=d+e;
    if (f==0) {
      if (rl==true) {
        cout<<"right ";
      }
      else {
        cout<<"left ";
      }
    }
    else if (f%2==0) {
      cout<<"right ";
      rl=true;
      }
    else {
      cout<<"left ";
      rl=false;
    }
    cout<<a[2]<<a[3]<<a[4]<<endl;
    cin>>a;
  }
}