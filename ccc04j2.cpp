#include <bits/stdc++.h>
using namespace std;
int main() {
  int range1, range2, i;
  cin>>range1>>range2;

  for(i=0; range1+60*i<=range2; i++) {
   cout<<"All positions change in year "<<range1+60*i<<"\n";
  }
}