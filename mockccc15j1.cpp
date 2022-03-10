#include <bits/stdc++.h>
using namespace std;
int main() {
  string a;
  cin>>a;
  string c;
  cin>>c;
  string b=a.substr(0,3);
  if ((c.size()+a.size())!=10) {
    cout<<"invalid";
  }
  else if (b!="416" && b!="647" && b!="437") {
    cout<<"invalid";
  }
  else if (b=="416") {
    cout<<"valuable";
  }
  else if (b=="647" or b=="437") {
    cout<<"valueless";
  } 

}