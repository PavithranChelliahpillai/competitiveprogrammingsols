#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c; double d; cin>>a>>b>>c>>d;
  double e;
  e=3.14159265*pow((d/2),2)*b;
  printf("%.2f",a*b*c-e);
}