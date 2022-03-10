#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c,d;
  int f=0;
  int e=1;
  int count1=0;
  int count2=0;
  int count3=0;
  cin>>a>>b>>c>>d;
  while (a!=0) {
    a--;
    f++;
    if (e==1) {
      count1++;
      e++;
      if ((count1+b)%35==0) {
        a+=30;
      }
    }
    else if (e==2) {
      count2++;
      e++;
      if ((count2+c)%100==0) {
        a+=60;
      }
    }
    else if (e==3) {
      count3++;
      e=1;
      if ((count3+d)%10==0) {
        a+=9;
      }
    }
  }
  cout<<"Martha plays "<<f<<" times before going broke.";
}