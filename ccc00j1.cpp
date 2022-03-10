#include <bits/stdc++.h>
using namespace std;
int main() {
  string space4 = "    ";
  string space3 = "   ";
  string space2 = "  ";
  string space1 = " ";

  int start;
  int days;
  int g;

  cin>>start;
  cin>>days;

  cout<<"Sun Mon Tue Wed Thr Fri Sat"<<endl;
  for (int i=1; i<=start-1; i++) {
    cout<<space4;
  }
cout<<space2;

int n=0;

for(int d=1; d<=days-1; d++) {
  if (d + start-1 == 8 + n*7){
    cout<<"\n";
    if (d<=9) {
      cout<<space2;
    }
    else if (d>9) {
      cout<<space1;
    }
    n++;
  }
  if (d<9) {
    cout<<d;
    if ((d+start-1)%7!=0) {
      cout<<space3;
    }
  }
  if (d>=9) {
    cout<<d;
    if ((d+start-1)%7!=0) {
      cout<<space2;
    }
  }
  g=d;
}
  if (g+1 + start-1 == 8 + n*7){
    cout<<endl<<space1;
  }
cout<<days<<endl;
}