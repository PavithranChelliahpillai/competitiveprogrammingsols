#include <bits/stdc++.h>
using namespace std;
int main() {
  int angle1;
  int angle2;
  int angle3;

  cin>>angle1;
  cin>>angle2;
  cin>>angle3;

  if (angle1+angle2+angle3 != 180) {
    cout<<"Error";
  }

  else if (angle1==60 && angle2==60 && angle3==60) {
    cout<<"Equilateral";
  }

  else if (angle1==angle2 or angle2==angle3 or angle3==angle1) {
    cout<<"Isosceles";
  }

  else {
    cout<<"Scalene";
  }
}