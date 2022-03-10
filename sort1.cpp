#include <bits/stdc++.h>
using namespace std;
void z(int *a, int *b) {
  int c=*a; *a=*b; *b=c;
}
void x(int a[], int b) {
  for (int i=0; i<b; i++) {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
void d(int a[], int b) {
  for (int i=0; i<b; i++) {
    for (int j=0; j<b-i-1; j++) {
      if (a[j]>a[j+1]) {z(&a[j],&a[j+1]); x(a,b);}
    }
  }
}
int main() {
  int b; cin>>b; int c[b]; for (int i=0; i<b; i++) cin>>c[i]; x(c,b); d(c,b);
}