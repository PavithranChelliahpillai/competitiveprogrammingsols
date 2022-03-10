#include <bits/stdc++.h>
using namespace std;
long long a=0;
int f(){
  long long b=0;
  for (long long i=0; i<=a; i++) b+=int(sqrt(a*a-i*i));
  return 1+4*b;
}
int main() {
  while (true) {
    cin>>a; if (a==0) return 0; cout<<f()<<endl; 
  }
}