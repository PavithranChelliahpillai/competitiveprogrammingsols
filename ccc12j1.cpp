#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
int limit, speed, fine;
cin >> limit >> speed;
fine = speed - limit;

if (fine<=0) {
  cout<<"Congratulations, you are within the speed limit!";
}

else if (fine>0) {
  if (fine>=1 && fine<=20) {
    cout<<"You are speeding and your fine is $100.";
  }
  else if (fine>=21 && fine<=30) {
    cout<<"You are speeding and your fine is $270.";
  }
  else if (fine>=31) {
    cout<<"You are speeding and your fine is $500.";
  }
}
}
