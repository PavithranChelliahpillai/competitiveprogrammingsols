#include <bits/stdc++.h>
using namespace std;
int main() {
  double daytime, evening, weekend;
  cin>>daytime;
  cin>>evening;
  cin>>weekend;

  double onlypayA, onlypayB;

  if (daytime>100) {
    onlypayA=daytime-100;
  }

  else if (daytime<=100) {
    onlypayA=0;
  }
  
  if (daytime>250) {
    onlypayB=daytime-250;
  }

  else if (daytime<=250) {
    onlypayB=0;
  }

  double PlanA = (onlypayA)*0.25+evening*0.15+weekend*0.20;
  double PlanB = (onlypayB)*0.45+evening*0.35+weekend*0.25; 

  cout<<"Plan A costs ";
  printf("%.2f", PlanA);
  cout<<endl;
  cout<<"Plan B costs ";
  printf("%.2f", PlanB);  
  cout<<endl;

  if (PlanA<PlanB) {
    cout<<"Plan A is cheapest.";
  }

  else if (PlanB<PlanA) {
    cout<<"Plan B is cheapest.";
  }

  else if (PlanA == PlanB) {
    cout<<"Plan A and B are the same price.";
  }
}