#include <bits/stdc++.h>
using namespace std;
int main() {
  double a;
  cin>>a;
  cout<<endl;
  double b;
  cin>>b;
  cout<<endl;
  if (a==0 && b==0){
    cout<<"indeterminate";
  }
  else if (a==0){
    cout<<"undefined";
  }
  else{
    double ans=(b/a)*(-1);
    printf("%.2f", ans);
  }
}