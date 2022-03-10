#include <bits/stdc++.h>
using namespace std;
int main() {
  string a;
  int b=0,e=0; 
  getline(cin, a);
  size_t c=a.find(":-)",0);
  while (c!=string::npos) {
    b++;
    c=a.find(":-)",c+1);
  }
  size_t g=a.find(":-(",0);
  while (g!=string::npos) {
    e++;
    g=a.find(":-(",g+1);
  }
  if (e==0 && b==0) {
    cout<<"none";
  }
  else if (e==b && e!=0) {
    cout<<"unsure";
  }
  else if (e>b) {
    cout<<"sad";
  }
  else {
    cout<<"happy";
  }
}