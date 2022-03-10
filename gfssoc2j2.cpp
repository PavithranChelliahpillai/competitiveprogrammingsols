#include <bits/stdc++.h>
using namespace std;
int main() {
  int a; cin>>a;
  int b=1,c=1; 
  for (int i=0; i<a; i++) {
    if (b%7==0) {
      if (b%13==0) {
        cout<<"Fizz Fuzz ";
      }
      else {
        cout<<"Fizz ";
      }
    }
    else if (b%13==0) {
      cout<<"Fuzz ";
    }
    else {
      cout<<b<<" ";
    }
    if (c%7==0) {
      if (c%13==0) {
        cout<<"Fizz Fuzz";
      }
      else {
        cout<<"Fizz";
      }
    }
    else if (c%13==0) {
      cout<<"Fuzz";
    }
    else {
      cout<<c;
    }
    cout<<endl;
    b++;
    c+=2;
  }
}