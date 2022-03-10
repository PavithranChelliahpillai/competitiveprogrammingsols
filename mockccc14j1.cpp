#include <bits/stdc++.h>
using namespace std;
int main() {
  int day1;
  int day2;
  int dosage;

  cin>>day1;
  cin>>day2;
  cin>>dosage;

   if (day1>dosage) {
     cout<<"Bob overdoses on day 1.";
   }
   else if (double(day1*0.5+day2)>dosage) {
     cout<<"Bob overdoses on day 2.";
   }
   else {
     cout<<"Bob never overdoses.";
   }
}