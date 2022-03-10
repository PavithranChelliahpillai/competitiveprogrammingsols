#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int>set;
  int t;
  int b=0;
  int a=0;
  int numb;
  cin>>t;
  for (int i=0; i<t; i++) {
    cin>>numb;
    for(a=1; a<=numb; a++) {
      if (numb%a==0) {
       b++;
      }
    }
    if (b==2) {
      set.push_back(1);
    }
    else {
      set.push_back(0);
    }
    b=0;
  }
  for (int c=0; c<set.size(); c++) {
  cout<<set[c]<<endl;
  }
}