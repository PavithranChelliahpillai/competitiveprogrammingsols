#include <iostream>
using namespace std;
int main() {
double mass;
double height;
double bmi;

cin>>mass;
cin>>height;

bmi = mass/(height*height);

if (bmi>25) {
  cout<<"Overweight";
}
else if (bmi>=18.5 && bmi<=25){
  cout<<"Normal weight";
}
else {
  cout<<"Underweight";
}
}